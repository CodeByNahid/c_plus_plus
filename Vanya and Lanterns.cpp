//Problem Link: https://codeforces.com/contest/492/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,l; cin>>n>>l;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    std::sort(v.begin(), v.end());
    int ans=2*max(v[0],l-v[n-1]);
    for(int i=0;i<n-1;i++){
        ans=max(v[i+1]-v[i],ans);
    }
    cout << ans / 2 << "." << "05"[ans % 2] << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
