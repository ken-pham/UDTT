#include<iostream>
#include<bits/stdc++.h>
#define arr 100
using namespace std;
int a[arr],b[arr];
void solve(int n,int &odd,int &even)
{
    int sd = n%10;
    if( sd%2==0 )
    {
        b[even]=sd;
        even++;
    }
    else
    {
        a[odd]=sd;
        odd++;
    }
    n=n/10;
    if(n==0) return;
    solve(n,odd,even);
}
int main()
{
    int n, odd=0, even=0;
    cout<<"input N = ";
    cin>>n;
    solve(n,odd,even);
    cout<<"The number of odd digits of N = "<<n<<" is "<<odd<<" with odd digits ={";
    if(odd==0) cout<<"}"<<endl;
    {
    for(int i=0;i<odd-1;i++)
        cout<<a[i]<<",";
    cout<<a[odd-1]<<"}"<<endl;
    }

    cout<<"The number of even digits of N = "<<n<<" is "<<even<<" with even digits ={";
    if(even==0) cout<<"}"<<endl;
    else
    {
    for(int i=0;i<even-1;i++)
        cout<<b[i]<<",";
    cout<<b[even-1]<<"}"<<endl;
    }
}
