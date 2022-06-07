#include<bits/stdc++.h>
using namespace std;
struct point{
	int n;
	char a;
	char b;
	char c;
};
vector<point> x;
point setPoint(int n,char a,char b,char c){
	point tmp;
	tmp.n = n;
	tmp.a = a;
	tmp.b = b;
	tmp.c = c;
	return tmp;
}
void chuyen(int n,char a,char b,char c){
	point tmp = setPoint(n,a,b,c);
	x.push_back(tmp);
	while(!x.empty()){
		point k=x.back();
		x.pop_back();
		if(k.n==1){
			cout<<k.a<<"->"<<k.c<<"\n";
		}
		else {
			x.push_back(setPoint(k.n-1,k.b,k.a,k.c));
			x.push_back(setPoint(1,k.a,k.b,k.c));
			x.push_back(setPoint(k.n-1,k.a,k.c,k.b));
			
		}
	}
}
int main(){
	int n;
	cin>>n;
	chuyen(n,'A','B','C');
}
