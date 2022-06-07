#include<bits/stdc++.h>
using namespace std;
void next(int a[],int n,int i)
{
    a[i]=1;
    i++;
    while(i<=n)
    {
        a[i]=0;
        i++;
    }
}
void view(int a[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void List(int n)
{
    int i;
    int a[n+1];
    for(int j=1;j<=n;j++)
        a[j]=0;
    do
    {
        view(a,n);
        i=n;
        while(i>0 && a[i]==1)
        {
            i--;
        }
        if(i>0)
            next(a,n,i);

    }while(i>0);
}
int main()
{
    int n;
    cin>>n;
    List(n);
}
