//Problem Link: https://codeforces.com/contest/1003/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    map<int,int>mp;
    int ans=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;
        ans=max(ans,mp[x]);
    }
    cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
