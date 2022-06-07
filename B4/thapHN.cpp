#include<bits/stdc++.h>
using namespace std;
void chuyen(int n,char a,char b, char c)
{
    if(n==1)
    {
        cout<<"chuyen 1 dia tu "<<a<<" sang "<<c<<endl;
    }
    else
        {
        chuyen(n-1,a,c,b);
        chuyen(1,a,b,c);
        chuyen(n-1,b,c,a);
        }
}
struct diem
{
    int n;
    char a;
    char b;
    char c;
};
stack<diem> s;
diem setdiem(int n, char a,char b,char c)
{
    diem x;
    x.n=n;
    x.a=a;
    x.b=b;
    x.c=c;
    return x;
}
void Chuyen_kdq(int n,char a,char b, char c)
{
    diem tg=setdiem(n,a,b,c);
    s.push(tg);
    while(!s.empty())
    {   diem k=s.top();
        s.pop();
        if(k.n==1)
            cout<<"chuyen 1 dia tu "<<k.a<<" sang "<<k.b;
        else
        {
            s.push(setdiem(k.n-1,k.b,k.a,k.c));
            s.push(setdiem(1,k.a,k.b,k.c));
            s.push(setdiem(k.n-1,k.a,k.c,k.b));
        }
    }
}
int main()
{
    int n;
    cin>>n;
    //chuyen(n,'A','B','C');
    Chuyen_kdq(n,'A','B','C');
}
