//Problem Link: https://codeforces.com/contest/1979/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n; cin>>n;
 vector<int>v(n);
 for(int &i:v) cin>>i;
 int ans=INT_MAX;
 for(int i=1;i<n;i++){
     ans=min(ans,max(v[i],v[i-1]));
 }
 cout<<ans-1<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
