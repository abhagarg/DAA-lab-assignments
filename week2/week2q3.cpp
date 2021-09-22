#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,t;
    cout<<"Enter the number of test cases\n";
    cin>>t;
    while(t--)
    {
        cout<<"Enter number of elements\n";
        cin>>n;
        int arr[n],diff,key,count=0;
        
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Enter the difference key\n";
        cin>>key;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(arr[i]-arr[j])==key)
                 count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}