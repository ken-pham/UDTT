#include<bits/stdc++.h>
using namespace std;
const float pi=3.14;
float f(float x)
{
    if(x==0) return cos(x);
    if(x<0) return x;
    return f(x-pi)+f(x-pi/2);
}
int main()
{
    cout<<f(3*pi/2);
}
