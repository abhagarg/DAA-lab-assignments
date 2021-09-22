#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
         cin>>arr[i];
         int key;
         cin>>key;
        //sort
        sort(arr,arr+n);
        int start=0,end=n-1,flag=0;
        while(start<=end)
        {
            if((arr[start]+arr[end])>key)
             end--;
            else if((arr[start]+arr[end])<key)
             start++;
            else if((arr[start]+arr[end])==key)
             {cout<<arr[start]<<" "<<arr[end]<<",";
              flag=1;
              start++;
              end--;
             }
        }
        if(flag==0)
         cout<<"NO such pair exists\n";

    }
    return 0;
}