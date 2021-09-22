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
        //selection sort
        int comp=0,swaps=0,min,pos;
        for(int i=0;i<n-1;i++)
        {   
            int min=arr[i];
            pos=i;
            for(int j=i+1;j<n;j++)
             {  
                comp++;
                 if(arr[j]<min)
                 {
                    min=arr[j];
                    pos=j;
                 }
             }
             if(pos!=i)
             {
                 arr[pos]=arr[i];
                 arr[i]=min;
                 swaps++;
             }
        }
     for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         cout<<endl;
         cout<<"comparisons "<<comp<<endl;
         cout<<"swaps "<<swaps<<endl;
    }
    return 0;
}