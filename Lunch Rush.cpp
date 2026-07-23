//Problem Link: https://codeforces.com/contest/276/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    int ans=INT_MIN;
    while(n--){
        int x,y;
        cin>>x>>y;
        if (y <= k) ans = max(ans, x);
        else ans = max(ans, x-(y-k));
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
