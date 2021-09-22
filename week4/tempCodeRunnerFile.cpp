#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int partition(int arr[],int l,int r)
{
    int pivot=arr[r],i=l-1;
    for(int j=l;j<=r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}
void QuickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,r);
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
        QuickSort(arr,0,n-1);
        for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";

    }
    return 0;
}