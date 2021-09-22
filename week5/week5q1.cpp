#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++)
         cin>>str[i];
        int count[26]={0};
        for(int i=0;i<n;i++)
        {
            count[str[i]-'a']++;
        }
        int max=count[0],index;
        for(int i=0;i<26;i++)
        {
            if(count[i]>max)
             max=count[i];
             index=i;
        }
        if(max==1)
         cout<<"No Duplicates present";
        else
        cout<<char(index+97)<<"-"<<max;
    }
    return 0;
}