#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    int w,h;
    cin>>w>>h;
    int h1= y2-y1;
    int w1= x2-x1;
    bool ans = false;
    if(h1>=h)
        if(n1-x1>=w or x2-n2>=w)
            ans=true;
    if(h1>=w)
        if(n1-x1>=h or x2-n2>=h)
            ans=true;
    if(w1>=h)
        if(m1-y1>=w or y2-m2>=w)
            ans=true;
    if(w1>=w)
        if(m1-y1>=h or y2-m2>=h)
            ans=true;
    if(ans)
        cout<<"Yes";
    else cout<<"No";

}

