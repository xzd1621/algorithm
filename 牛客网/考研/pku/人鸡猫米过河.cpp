#include <iostream>
#define MAXACTION  10
#define man 0
#define  cat  3
#define chicken  2
#define  rice   1
using namespace std; 
int here [4]={0,1,1,1};
int there[4]={1,0,0,0};//״̬
int action[MAXACTION];
int  step=0;
void back(int last); 
void print()
{
 for(int i=0;i<step;i++)
 {
	if (i%2)
    cout<<"back: ";
   else
    cout<<"\ngo :";
   switch(action[i]){
   case man:        cout<<"    ��    ";break;
   case cat:        cout<<"��  �� è"; break;
   case chicken:    cout<<"��  ��  ��";break;
   case rice:       cout<<"��  ��  ��"; break;
   }
   cout<<"\t";
 }//#end for
 cout<<endl<<endl;
}
void go(int last)
{
 if(step>=MAXACTION) return ;
   for(int i=0;i<4;i++)
   {
	    if(here[i]&&i!=last)//last�����Ǹջذ��ߣ��������ڷ���
	    {
		    action[step++]=i;
		    here[i]=0;
		    there[i]=1;
		    if(there[cat]&&there[chicken]&&there[rice])
		    print();
	        if(!((here[chicken]&&here[rice])||(here[chicken]&&here[cat])))  //ÿ�ζ������˴�����ӣ������жϵ���here���߸ı��״̬����
	                      back(i);
	         
		     there[i]=0;
		     here[i]=1;
		     step--; 
	    }//# end if
   }//#end for
}
void back(int last)
{
 if(step>=MAXACTION) return ;
  for(int i=0;i<4;i++)
  {
     if(there[i]&&i!=last)
	  {
		   action[step++]=i;
		   if(i!=man)
		   {
			   there[i]=0;
			   here[i]=1;
		   }
		   if(!((there[cat]&&there[chicken])||(there[chicken]&&there[rice])))
		                 go(i);
		  there[i]=1;
		  here[i]=0;
		  step--;
	  }//#end if
  }//#end for
}
int main()
{
  go(man);
  return 0;
}

