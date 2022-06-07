#include<bits/stdc++.h>

#define MAX 20

using namespace std;

int A[MAX][MAX] = { 0 };//Khởi tạo mảng giá trị 0
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};

int n;

void xuat() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout<< A[i][j]<<" ";
        cout << endl;
    }
    cout << endl;
}

void Try(int k,int x, int y,int &res) {
   int u,v,res1;
   int i=0;
   do
   {
       i++;
       res1=0;
       u=x+X[i];
       v=y+Y[i];
       if(1<=u and u<=n and 1<=v and v<=n and A[u][v]==0)
       {
          A[u][v]=k;
          if(k<n*n)
          {
              Try(k+1,u,v,res1);
              if(!res1)
                A[u][v]=0;
          }
          else res1=1;
       }
   }while(!res1 and (i<8));
   res=res1;
}
int main() {
    cout << "Nhap n: ";
    cin >> n;
    int a, b,ans;
    cout << "Nhap vi tri ban dau.\nx: ";
    cin>>a;
    cout << "y: ";
    cin >> b;
    A[a][b]=1;
    Try(2,a,b,ans);
    if(ans)
        xuat();
    else
        cout << "Khong tim thay duong di.";
}
