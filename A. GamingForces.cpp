//Problem Link: https://codeforces.com/contest/1792/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int x=count(v.begin(), v.end(), 1);
  cout<<n-x/2<<"\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
