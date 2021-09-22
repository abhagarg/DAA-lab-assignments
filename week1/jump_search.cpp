#include<iostream>
#include<math.h>
using namespace std;
int jump(int arr[],int ele,int n)
{
  
  int step=(int)sqrt(n);
        int prev=0;
        while(arr[min(step,n)-1]<ele)
        {
           prev=step;
           step=step+(int)sqrt(n);
           if(prev>=n)
            return -1;
        }
        while(arr[prev]<ele)
        {
            prev++;
            if(prev==min(step,n))
             return -1;
        }
        if(arr[prev]==ele)
         return prev;
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
        //bool found=false;
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        cout<<"Enter the element to be searched\n";
        cin>>ele;
        int res=jump(arr,ele,n);
       
        if(res==-1)
        cout<<"Not Present\n";
        else 
        cout<<"Present!";
       
    }
  return 0;
}