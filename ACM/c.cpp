#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k; cin>>k;
    string  f=s.substr(0,2);
    //cout<<f<<endl;
    int x=0,y=1;
    for(int i=0;i<s.size()-1;i++)
    {

      string ans = s.substr(i,2);
      if(ans.compare(f)<0)
      {
          f=ans;
          x=i;
          y=i+1;
      }
      reverse(ans.begin(), ans.end());
      if(ans.compare(f)<0)
      {
          f=ans;
         x=i+1;
         y=i;
      }
      //cout<<ans<<" "<<f<<endl;

    }

    for(int i=1;i<=k;i++)
        if (i%2!=0) cout<<s[x];
            else cout<<s[y];
}
