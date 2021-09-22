#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
     cin>>arr1[i];
    cin>>n;
    int arr2[n];
    for(int j=0;j<n;j++)
     cin>>arr2[j];
     vector<int> ans;
    int i=0,j=0;
    while(i<m && j<n)
    {
      if(arr1[i]==arr2[j])
      {
          ans.push_back(arr1[i]);
          i++;
          j++;
      }
      else if(arr1[i]<arr2[j])
       i++;
       else 
        j++;
    }
    for(int c=0;c<ans.size();c++)
     cout<<ans[c]<<" ";
    return 0;
}