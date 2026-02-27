//Problem Link: https://www.codechef.com/problems/FODCHAIN
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b; cin>>a>>b;
   int ans=0;
   while(a>0){
       a/=b;
       ans++;
   }
   cout<<ans<<endl;
   return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
