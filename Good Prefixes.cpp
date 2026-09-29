//Problem Link: https://codeforces.com/contest/1985/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    ll mx=-1,count=0,sum=0;
    for(ll &i:v) cin>>i;
    for(auto i:v){mx=max(mx,i);sum+=i;if(sum-mx==mx)count++;} 
        cout<<count<<"\n";
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
