#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    ll t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(a[0]==x && a[n-1]==y)
            cout<<"BOTH";
        if(a[0]==x && a[n-1]!=y)
            cout<<"EASY";
        if(a[0]!=x && a[n-1]==y)
            cout<<"HARD";
        if(a[0]!=x && a[n-1]!=y)
            cout<<"OKAY";
        cout<<endl;
    }

    return 0;
}
