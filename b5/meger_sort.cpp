#include<bits/stdc++.h>
using namespace std;
void megersort(int *c,int *a,int*b)
{

}
int main()
{
    int n,m;
    cout<<"nhap so luong mang a ";
    cin>>n;
    int *a;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"nhap so luong mang b ";
    cin>>m;
    int *b;
    b=new int[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+m);
    cout<<"so chai toi da co the day la "<<slove(a,n,m);


}
