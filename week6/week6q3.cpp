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
 for(int i=0;i<N;i++)
  make_set(i);

  int n;
  cin>>n;
  vector<vector<int> > edges;
   for(int i=0;i<n;i++)
   {
      vector<int> vertices;
      for(int i=0;i<n;i++)
      {
        int x;
        cin>>x;
        vertices.push_back(x);
      }

       edges.push_back(vertices);

   }
   bool cycle=false;
   for(int i=0;i<edges.size();i++)
   {
       int u=edges[i][0];
       int v=edges[i][1];
       int x=find(u);
       int y=find(v);
       if(x==y)
        cycle=true;
       else
       {
           union_set(u,v);
       }
   }
    if(cycle)
     cout<<"Yes cycle exists";
    else
     cout<<"No cycle doesn't exist";
    return 0;
}
