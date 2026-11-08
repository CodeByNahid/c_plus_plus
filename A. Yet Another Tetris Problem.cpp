//Problem Link: https://codeforces.com/contest/1324/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  for(int i=1;i<n;i++){
      if(v[i]%2!=v[0]%2){
          cout<<"No"<<endl;
          return;
      }
      
  }
  cout<<"Yes"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
