//Problem Link: https://codeforces.com/contest/1760/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll &i:v) cin>>i;
    ll f = 0, s = 0;

for(ll x : v) {
    if(x > f) s = f, f = x;
    else if(x > s) s = x;
}
    for(ll i:v){
        if(i==f){
            cout<<i-s<<" ";
        }
        else{
            cout<<i-f<<" ";
        }
    }
    cout<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
