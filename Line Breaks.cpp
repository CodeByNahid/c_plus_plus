//Problem Link: https://codeforces.com/contest/2050/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,tem=0,ans=0; cin>>n>>k;
    string s; 
    for(int i=0;i<n;i++){
        cin>>s;
        tem+=s.size();
        if(tem<=k) ans++;
        
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
