//Problem Link: https://codeforces.com/contest/1697/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int sum=accumulate(v.begin(), v.end(), 0);
  cout<<max(0,sum-k)<<"\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
