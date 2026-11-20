//Problem Link: https://codeforces.com/contest/1862/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,m;
    cin>>n>>m;
 
    vector<vector<char>> v(n,vector<char>(m));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            cin>>v[i][j];
    }
 
    string s="vika";
    ll ind=0;
 
    for(ll j=0;j<m && ind<4;j++)
    {
        for(ll i=0;i<n && ind<4;i++)
        {
            if(v[i][j]==s[ind])
            {
                ind++;
                break;
            }
        }
    }
 
    if(ind>=4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
