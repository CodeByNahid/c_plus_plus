//Problem Link:https://codeforces.com/contest/1999/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k,s; cin>>n>>k>>s;
    ll st=0,d=0;
    ll l,r;
    while(n--){
        cin>>l>>r;
        d=max(l-st,d);
        st=r;
    }
    d=max(s-st,d);
    cout<<(d>=k?"YES":"NO")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
