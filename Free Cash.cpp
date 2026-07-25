//Problem Link: https://codeforces.com/contest/237/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    map<int,int>mp;
    while(n--){
        int x,y;
        cin>>x>>y;
        mp[x*60+y]++;
    }
    int ans=-1;
    for(auto i:mp){
        ans=max(ans,i.second);
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
