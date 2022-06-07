#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 5005;
char a[maxn][maxn];
int m,n;
void solve()
{
    cin>>n>>m;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j <= m ; j++)
            cin>>a[i][j];

    int ans = -1,aa = 0, bb = 0;

    for(int i= 2; i<=n-1; i++)
        for(int j = 2; j <= m-1; j++)
        {

            if(a[i][j] == '1'  ) {
                int len=0,xuong=0,trai=0,phai=0;

                int ii = i+1;
                while(a[ii][j] == '1' and ii <= n  ) xuong++,ii++;

                ii = i-1;
                while(a[ii][j] == '1' and ii >=1 ) len++,ii--;

                int jj = j+1;
                while(a[i][jj] == '1' and jj <=m ) phai++,jj++;

                jj = j-1;
                while(a[i][jj] == '1' and jj >=1 ) trai++,jj--;

               int mi = min(min(len,xuong),min(trai,phai));
               if(mi*4+1 > ans ) {
                        aa=i;
                        bb=j;
                        ans=mi*4+1;
                        if(mi>= m-j or mi>= n-i)
                        goto ok;

                }
            }
        }
    ok:
    if(ans == -1) {
        cout<<-1;
    }else {
    cout<<ans<<"\n"<<aa<<" "<<bb;
    }

}
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("Output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
}
