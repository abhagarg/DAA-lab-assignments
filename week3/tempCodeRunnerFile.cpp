#include<iostream>
using namespace std;
void merge(int arr,int left,int middle,int right)
{
    int n1=middle-left+1, n2=right-middle;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
     L[i]=arr[left+i];
    for(j=0;j<n2;j++)
     R[j]=arr[middle+1+j];
    int i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
         arr[k++]=L[i++];
        else
         arr[k++]=R[j++];
    }
    while(i<n1)
     arr[k++]=L[i++];
    while(j<n2)
     arr[k++]=R[j++];
    int copy=arr[0],flag=0;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]==copy)
        {
            flag=1;
            break;
        }
        else 
         copy=arr[i];
    }
    if(flag==0)
     cout<<"NO";
    else 
     cout<<"YES";
}
void mergeSort(int arr[],int left,int right)
{
    int mid=(left+right)/2;
    if(left<right)
    {
      mergeSort(arr,left,mid);
      mergeSort(arr,mid+1,right);
      merge(arr,left,mid,right);
    }
}
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
        mergeSort(arr,0,n-1);
}