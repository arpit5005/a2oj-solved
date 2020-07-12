#include<iostream>
using namespace std;
int main()
{
    int t,sum=0;
    cin>>t;
    int arr[2*t-1];
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i=i+2)
        cin>>arr[i]>>arr[i+1];
    for(int j=0;j<size;j=j+2)
    {
        sum=0;
        sum=arr[j]+arr[j+1];
        cout<<sum<<endl;
    }

    return 0;
}

