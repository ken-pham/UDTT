#include<bits/stdc++.h>
using namespace std;
void next(int a[], int n, int i)
{
    int k=n;
    while(a[k]<a[i])
        k--;
    swap(a[i],a[k]);
    int j=n;i++;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
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
    int i,a[n+1] ;
    for (i=1;i<=n;i++)
        a[i]=i;
    do
    {
        view(a,n);
        i=n-1;
        while(i>0 and a[i]>a[i+1])
            i--;
        if(i>0)
        {
            next(a,n,i);
        }
    }while(i>0);
}
int main()
{
    int n;
    cin>>n;
    List(n);
}
