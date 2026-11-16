//Problem Link: https://codeforces.com/contest/939/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n+1);
  for (int i = 1; i<=n;i++) cin >> v[i];
  for(int i=1;i<=n;i++){
      if(v[v[v[i]]]==i){
          cout<<"Yes"<<endl;
          return;
      }
  }
  cout<<"No"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
