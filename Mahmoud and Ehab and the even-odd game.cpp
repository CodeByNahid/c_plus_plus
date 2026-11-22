//Problem Link: https://codeforces.com/contest/959/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  cout<<(n&1?"Ehab":"Mahmoud")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
