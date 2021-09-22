#include<iostream>
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
        int arr[n],sum=0,flag=0;
        
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            while(j<n)
            {
                sum=arr[i]+arr[j];
                for(int k=j+1;k<n;k++)
                {
                    if(arr[k]==sum)
                     {
                         cout<<i<<" "<<j<<" "<<k<<endl;
                         flag=1;
                         break;
                     }
                }
                j++;
            }
        }
        if(flag==0)
        cout<<"sequence not found"<<endl;
        
    }
    return 0;    
}