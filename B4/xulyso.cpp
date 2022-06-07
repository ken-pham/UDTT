#include<bits/stdc++.h>
using namespace std;
void xl(int x);
void xl_le(int x)
{
    cout<<x*3+1<<" ";
        xl(x*3+1);
}
void xl_c(int x)
{
    cout<<x/2<<" ";
        xl(x/2);
}
void xl(int x)
{
    if(x%2==0)
        xl_c(x);
    else if(x>1)
        xl_le(x);
}
int main()
{
    int n;
    cout<<"nhap n";
    cin>>n;
    xl(n);
}

