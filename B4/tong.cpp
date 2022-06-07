#include<bits/stdc++.h>
using namespace std;
int s(int n)
{
    if(n==0) return 0;
    return n%10+s(n/10);
}
int s_lap(int n)
{
    int t=0;
    while (n>0)
    {
        t+=n%10;
        n/=10;
    }
    return t;
}
int main()
{
    int n;
    cout<<"nhap n ";
    cin>>n;
    cout<<"tong theo de quy "<<s(n)<<endl;
    cout<<"tong theo vong lap "<<s_lap(n)<<endl;
}
