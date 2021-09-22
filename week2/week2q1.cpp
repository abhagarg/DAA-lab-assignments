#include<iostream>
using namespace std;
int bin(int arr[],int ele,int beg,int last)
{
    int  mid=(beg+last)/2;
    while(beg<=last)
    {
        if(arr[mid]==ele)
         return mid;
        else if(arr[mid]>ele)
         return bin(arr,ele,mid+1,last);
        else return bin(arr,ele,beg,mid-1);
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
        int arr[n],ele,comp,mid,count=0;;
        //bool found=false;
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        cin>>arr[i];

        cout<<"Enter element to be searched\n";
        cin>>ele;
        
        int res=bin(arr,ele,0,n-1);
        if(res!=-1)
        {
           count=1;
           int left=res-1;
           while(arr[left]==ele && left>=0)
           {
               left--;
               count++;
           }
           int right=res+1;
           while(arr[right]==ele && right<=n-1)
           {
               right++;
               count++;
           }
           cout<<ele<<"-"<<count<<endl;
           
        }
        else
        cout<<"Key not present";
    }
  return 0;
}
