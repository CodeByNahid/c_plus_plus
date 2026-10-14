//Problem Link: https://codeforces.com/contest/2276/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b; cin>>a>>b;
  if(a<=b){
      cout<<-1<<endl; return;
  }
  cout<<min(b,a-b)<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
