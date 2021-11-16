#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        int element,flag=0,count=0;
        cin>>element;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==element)
            {
                flag=1;
                break;
            }
            count++;
        }
        if(flag)
         cout<<"Present "<<count+1;
        else
         cout<<"Not present "<<count+1;
        t--;
        
    }
    return 0;
}