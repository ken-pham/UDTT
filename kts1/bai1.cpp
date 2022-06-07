#include<bits/stdc++.h>
 using namespace std;
 int Acker(int m, int n)
 {
     if(m==0) return n+1;
     if(n==0) return Acker(m-1,1);
     return Acker(m-1,Acker(m,n-1));
 }
 int main()
 {
     int m,n;
     cout<<"nhap 2 so m va n";
     cin>>m>>n;
     cout<<Acker(m,n);
 }
