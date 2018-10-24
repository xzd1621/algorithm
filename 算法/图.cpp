#include<iostream>
#include<deque>
using namespace std;
//����������� 
//https://leetcode.com/problems/keys-and-rooms/description/ 
bool canVisitAllRooms(vector<vector<int>>& rooms) 
{
        int c=rooms.size();
        int d[c],p[c],color[c];//colorΪ0��ʾδ�����ʣ�1��ʾ������δ�����ʵĶ�������
        //2��ʾ�ѱ����ʣ������ӵĶ���Ҳ������
		//d[i]��ʾ����ڵ�ľ���
		//p[i]��ʾi�ĸ��ڵ���p[i] 
        for(int i=0;i<c;i++)
        {
            d[i]=INT_MAX;
            p[i]=-1;
            color[i]=0;
        }
        color[0]=1;
        d[0]=0;
        p[0]=-1;
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            for(int j=0;j<rooms[t].size();j++)
            {
                if(color[rooms[t][j]]==0)
                {
                    color[rooms[t][j]]=1;
                    d[rooms[t][j]]=d[t]+1;
                    p[rooms[t][j]]=t;
                    q.push(rooms[t][j]);//���ܴ���δ�����ʵ��ڽӶ��������� 
                }
            }
            color[t]=2;
        }
        for(int i=0;i<c;i++)
        {
            if(d[i]==INT_MAX)
                return false;
        }
        return true;
}
//�����������
 
