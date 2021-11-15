#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
const int N=10^2;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v)
{
    parent[v]=v;
    sz[v]=1;
}
int find(int v)
{
    if(v==parent[v])
      return v;
    return parent[v]=find(parent[v]);
}
void union_set(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(sz[a]<sz[b])
         swap(a,b);

        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int main()
{
    int cost;
 for(int i=0;i<N;i++)
  make_set(i);

  int n,m;
  cin>>n>>m;
  vector<vector<int> > edges;
   
      for(int i=0;i<m;i++)
      {
       int u,v,w;
       cin>>u>>v>>w;
       edges.push_back({w,u,v});
      }
       
   sort(edges.begin(),edges.end());
   
   for(int i=0;i<edges.size();i++)
   {
       int w=edges[i][0];
       int u=edges[i][1];
       int v=edges[i][2];
       int x=find(u);
       int y=find(v);
       if(x==y)
        continue;
       else
       {
           cout<<u<<" "<<v<<" "<<endl;
           cost+=w; 
           union_set(u,v);
       }
   }
    cout<<cost;
    return 0; 
}