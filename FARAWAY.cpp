//Problem Link: https://www.codechef.com/problems/FARAWAY
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,m; cin>>n>>m;
    ll ans=0;
    ll x; 
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>m/2) ans+=x-1;
        else ans+=m-x;
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
