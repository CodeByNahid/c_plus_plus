//Problem Link: https://codeforces.com/contest/1993/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    map<char,int>mp;
    string s; cin>>s;
    for(char i:s) if(i!='?')mp[i]++;
    int ans=0;
    for(auto i:mp){
        if(i.second>=n){
            ans+=n;
        }
        else  ans+=i.second;
    }
    cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
