//Problem Link: https://codeforces.com/contest/1294/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  
 vector<int>v(3);
  for(int &i:v) cin>>i;
  int n; cin>>n;
  sort(v.begin(), v.end());
  int tem=(v[2]-v[0]) + (v[2]-v[1]);
  cout<<(n-tem>=0 && (n-tem)%3==0?"Yes":"No")<<endl;
  
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
