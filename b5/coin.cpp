#include<bits/stdc++.h>
using namespace std;
int a[5]={100,25,10,5,1};
int b[5]={0};
void coin(int*a,int n,int*b)
{
    int i=0;
    while(n>0)
    {
        b[i]=n/a[i];
        n=n%a[i]);
        i++;
    }
}
int main()
{
    int n;
    cout<<"nhap tong so tien";
    cin>>n;
    coin(a,n,b);
    cout<<"so luong tien moi loai la"<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<"  ";
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<b[i]<<"  ";
}
