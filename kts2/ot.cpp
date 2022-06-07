#include<bits/stdc++.h>
using namespace std;
int k=3;
int n=5;
int M[1000];  // khoi tao mang 0
void InCauHinh(int M[],int n)
{
	for(int i=1;i<=k;i++)
	{
		cout<<M[i];
	}
	cout<<endl;
}
void Try(int i)       // su dung thuat toan quay lui cho bai toan
{
	for(int j=M[i-1]+1;j<=n-k+i;j++)
	{
		M[i]=j;
		if(i==k)
		{
			InCauHinh(M,k);
		}
		else
		{
			Try(i+1);
		}
	}
}
int main() {
	Try(1);
	return 0;
}
