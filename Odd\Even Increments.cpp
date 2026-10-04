//Problem Link: https://codeforces.com/contest/1669/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>a(n);
  for(int &i:a) cin>>i;
  for (int i = 0; i < n; i++) {
        if (a[i] % 2 != a[i % 2] % 2) {
            std::cout << "NO\n";
            return;
        }
    }
    
    std::cout << "YES\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
