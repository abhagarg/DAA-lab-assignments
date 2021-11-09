#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isBipartite(vector<vector<int> > adjmat, int src)
{
    int n=adjmat.size();
    vector<int> color_arr(n,1);
    color_arr[src]=1;

    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int val=q.front();
        q.pop();

        if(adjmat[val][val]==1)
            return false;

        for(int it=0;it<n; it++)
        {
            if(adjmat[val][it] and color_arr[it]== -1)
        {
            color_arr[it]=1-color_arr[val];
            q.push(it);
        }
        else if(adjmat[val][it] and color_arr[it]==color_arr[val])
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int> > adjmat;
    for(int i=0;i<n;i++)
    {
        vector<int> rows;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            rows.push_back(x);
        }
        adjmat.push_back(rows);
    }
    if(isBipartite(adjmat,0))
        cout<<"Yes Bipartite\n";
    else
        cout<<"Not Bipartite\n";

    return 0;

}
