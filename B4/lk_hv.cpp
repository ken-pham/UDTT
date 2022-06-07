#include<bits/stdc++.h>
using namespace std;
const int Maxs=1e5+7;
int n;
int a[Maxs]={0};
int x[Maxs];
void show(int *x)
{
    for(int i=1;i<=n;i++)
        cout<<x[i];
    cout<<endl;
}
void Try(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i] == 0)
        {
            x[k]=i;
            if(k == n)
                show(x);
            else
            {
            a[i]=1;
            Try(k+1);
            a[i]=0;
            }
        }
    }
}

int main()
{
    cout<<"nhap 1 so tu nhien"<<endl;
    cin>>n;
    Try(1);
}
