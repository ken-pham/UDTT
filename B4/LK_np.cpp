#include<bits/stdc++.h>
using namespace std;
const int Maxs=1e5+7;
int n;

int x[Maxs];
void show(int *x)
{
    for(int i=1;i<=n;i++)
        cout<<x[i];
    cout<<endl;
}
void Try(int k)
{
    for(int i=0;i<=1;i++)
    {
        x[k]=i;
        if (k==n)
        {
            show(x);
        }
        else
            Try(k+1);

    }
}
int main()
{
    cout<<"nhap 1 so tu nhien\n";
    cin>>n;
    Try(1);
}
