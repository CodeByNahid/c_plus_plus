//Problem Link: https://codeforces.com/contest/2001/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    map<int,int>mp;
    for(int i:v)mp[i]++;
    int ans=0;
    for(auto i:mp) ans=max(ans,i.second);
    
    
    cout<<n-ans<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
