#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()>s2.size()) cout<<"No";
    else
    {
        int ans=0;
        for (int i=0;i<s1.size();i++)
        {
            if (s1[i]!= s2[i])
                ans=1;
        }
        if(ans==1) cout<<"No";
        else cout<<"Yes";

    }
}

