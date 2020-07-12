#include<iostream>
using namespace std;
int main()
{
    int T,N,X,Y;
    string out;
    cin>>T;
    string output[T];
    for(int i=0;i<T;i++)
    {
        cin>>N>>X>>Y;
        int coln[N];
        for(int n=0;n<N;n++)
        {
            cin>>coln[n];
        }
        if(coln[0]==X && coln[N-1]==Y)
            out="BOTH";
        else if(coln[0]==X)
            out="EASY";
        else if(coln[N-1]==Y)
            out="HARD";
        else
            out="OKAY";

        output[i]=out;
    }
    for(int i=0;i<T;i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}
