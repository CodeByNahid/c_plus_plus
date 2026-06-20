//Problem Link: https://codeforces.com/contest/1846/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int ans=0;
   while(n--){
       int a,b;
       cin>>a>>b;
       if(a>b) ans++;
   }
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
