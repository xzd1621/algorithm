#include<iostream>
#include<deque>
using namespace std;
//广度优先搜索 
//https://leetcode.com/problems/keys-and-rooms/description/ 
bool canVisitAllRooms(vector<vector<int>>& rooms) 
{
        int c=rooms.size();
        int d[c],p[c],color[c];//color为0表示未被访问，1表示可能与未被访问的顶点连接
        //2表示已被访问，且连接的顶点也被访问
		//d[i]表示与根节点的距离
		//p[i]表示i的父节点是p[i] 
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
                    q.push(rooms[t][j]);//可能存在未被访问的邻接顶点进入队列 
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
//深度优先搜索
 
