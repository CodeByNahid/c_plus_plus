//Problem Link: https://codeforces.com/contest/1900/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  string s; cin>>s;
  int c=0, ans=0;
  for(int i=0;i<n;i++){
      if(s[i]=='.'){
          c++;
      }
      else{
          if(c>=3){
              cout<<2<<endl; return;
          }
          c=0;
  }
      
  }
 if(c>=3){
              cout<<2<<endl; return;
          }
ans=count(s.begin(), s.end(), '.');
cout<<ans<<endl;

}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
