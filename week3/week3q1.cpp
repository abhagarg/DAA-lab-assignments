#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int i,j,key,comp=0,shifts=0;
        for(i=1;i<n;i++)
        {
           j=i-1;
           key=arr[i];
           while(j>=0 && key<arr[j])
           {
             arr[j+1]=arr[j];
             j=j-1;
             comp++;
             shifts++;
           }
           arr[j+1]=key;
           shifts++;
        }
         for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         cout<<endl<<comp<<endl<<shifts<<endl;
    }
    return 0;
}