//Problem Link: https://codeforces.com/contest/1618/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   vector<int>v(7);
   for(int &i:v) cin>>i;
   cout<<v[0]<<" "<<v[1]<<" ";
   if(v[0]+v[1]==v[2]){
       cout<<v[3]<<endl;
   }
   else cout<<v[2]<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
