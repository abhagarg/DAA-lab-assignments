#include<iostream>
using namespace std;
int count=0;
int binary(int arr[],int ele, int beg,int end)
{
    if(end>=beg)
    {
      int mid=(beg+end)/2;
    if(arr[mid]==ele)
     {return mid;
       count++;
       cout<<"count"<<endl;
     }
    else if(ele<arr[mid])
     return binary(arr,ele,beg,mid-1);
    else return binary(arr,ele,mid+1,end);  
    }
    return -1;
}
int main()
{
    int n,t;
    cout<<"Enter the number of test cases\n";
    cin>>t;
    while(t--)
    {
        cout<<"Enter number of elements\n";
        cin>>n;
        int arr[n],ele,comp,mid;
        bool found=false;
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        cout<<"Enter the element to be searched\n";
        cin>>ele;
        int res=binary(arr,ele,0,n-1);
        if(res!=-1)
         cout<<"Present-"<<count<<endl;
        else cout<<"Not present\n";
    }
}