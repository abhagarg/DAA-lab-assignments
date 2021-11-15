#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define INT_MAX 10000
vector<int> returnpath(int src, int des,vector<int> &par)
{
    vector<int> path;
    for(int i=des; i!=src; i=par[i])
     path.push_back(i+1);

    path.push_ba5ck(src+1);
    return path;
}
void bellman(vector<vector<int> > &adj, int src, vector<int> &dis, vector<int> &par)
{
    int size=adj.size();
    dis.assign(size,INT_MAX);
    par.assign(size,-1);
    dis[src]=0;

    for(int i=0;i<size-1;i++) //relaxing the edges size-1 times
    {
        for(int x=0;x<size;x++)
        {
            for(int y=0;y<size;y++)
           {   if(adj[x][y])
              {
                 if(dis[x]!=INT_MAX && dis[y]> dis[x]+adj[x][y])
                {
                   dis[y]=dis[x]+adj[x][y];
                   par[y]=x;
                } 
              }
              
           }
        }
         
    }

}
int main()
{
    vector<vector<int>> adj;
    int v;
    cin>>v;
    for(int i=0;i<v;i++)
    {
        int k;
        vector<int> row;
        for(int j=0;j<v;j++)
        {
            cin>>k;
            row.push_back(k);
        }
        adj.push_back(row);
    }
    int src;
    cin>>src;
    src--;
    vector<int> dis,par;

    bellman(adj,src,dis,par);

    for(int i=0;i<v;i++)
    {
       vector<int> path_cur = returnpath(src,i,par);
       for(int x: path_cur)
         cout<<x<<" ";
        cout<<":"<<dis[i]<<endl;

    }
 return 0;
}