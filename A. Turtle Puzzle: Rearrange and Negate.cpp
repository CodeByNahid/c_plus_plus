//Problem Link: https://codeforces.com/contest/1933/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  for(int i=0;i<n;i++){
      if(v[i]<0) v[i]=-1*v[i];
  }
  cout<<accumulate(v.begin(), v.end(), 0)<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
