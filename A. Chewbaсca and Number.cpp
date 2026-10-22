//Problem Link: https://codeforces.com/contest/514/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s; cin>>s;
  if(s[0]!='9'){
      int tem=s[0]-'0';
      cout<<min(tem,9-tem);
  }
  else cout<<s[0];
  for(int i=1;i<s.size();i++){
      int tem=s[i]-'0';
      cout<<min(tem,9-tem);
  }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
