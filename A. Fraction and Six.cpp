//Problem Link: https://codeforces.com/contest/2278/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,m; cin>>n>>m;
  string s1,s2,tem;
  map<char,bool>mp;
  cin>>s1>>s2;
  for(char i:s1){
      if(i=='s' || i=='i' || i=='x'){
          if(mp[i]){
              tem.push_back(i);
          }
          else mp[i]=1;
      }
      else tem.push_back(i);
  }
  

   sort(tem.begin(), tem.end());
   sort(s2.begin(), s2.end());
  cout<<(tem==s2 && mp['i'] && mp['s'] && mp['x']?"yes":"no")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
