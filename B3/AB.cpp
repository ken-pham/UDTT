#include<bits/stdc++.h>
using namespace std;
void next(char a[],int n,int i)
{
    a[i]='b';
    i++;
    while(i<=n)
    {
        a[i]='a';
        i++;
    }
}
void view(char a[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void List(int n)
{
    int i;
    char a[n+1];
    for(int j=1;j<=n;j++)
        a[j]='a';
    do
    {
        view(a,n);
        i=n;
        while(i>0 && a[i]=='b')
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

