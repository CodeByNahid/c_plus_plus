//Problem Link: https://codeforces.com/contest/1807/problem/D
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll rang_sum(ll l,ll r,vector<ll>v){
    ll sum=0;
    for(ll i=0;i<l-1;i++)sum+=v[i];
   // cout<<"range 1 sum: "<<sum<<endl;
    for(ll i=r;i<v.size();i++)sum+=v[i]; 
    //cout<<"range 2 sum: "<<sum<<endl;
    return sum;
    
}
void solve(){
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);

    for (ll &i : v)
        cin >> i;

    vector<ll> pre(n + 1, 0);

    for (ll i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + v[i];
    }

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        l--; 
        ll total =
            pre[l] +                 
            (pre[n] - pre[r]) +     
            (r - l) * k;           

        cout << (total % 2 ? "YES" : "NO") << '\n';
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
