//Problem Link: https://codeforces.com/contest/1875/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b,n;
        cin>>a>>b>>n;
        
        vector<ll>v(n);
        for(int i=0;i<n;i++){
           cin>>v[i];
        }
 
        ll ans=0;
        
        for(int i=0;i<n;i++){
            
                ans+=min(v[i],a-1);
 
        }
        cout<<ans+b<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
