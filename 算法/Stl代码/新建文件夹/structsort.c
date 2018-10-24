#include<stdio.h>
#include<math.h>
struct student
{
    int age;
    int score;
};

//不记得快排。。。。冒泡将就一下。。
void sortscore(struct student *stu,int n)
{
    int i,j;
    for( i=0;i<n-1;i++)
    {
        for( j=0;j<n-i-1;j++)
        {
            //按照分数从小到大排，如果分数相等按照年龄从小到大排
            if((stu[j].score>stu[j+1].score)||(stu[j].score==stu[j+1].score&&stu[j].age>stu[j+1].age))
            {
                struct student temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }

        }
    }
}
int main()
{
    struct student s[5]={{18,80},{12,80},{13,90},{15,100},{20,60}};
    int i;
    sortscore(s,5);
    for( i=0;i<5;i++)
    {
        printf("年龄：%d 分数： %d\n",s[i].age,s[i].score);
    }
}
