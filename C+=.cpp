//Problem Link: https://codeforces.com/contest/1368/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c; cin>>a>>b>>c;
    if (a>b) swap(a,b);
    int ans=0;
    while (b<=c) { 
        a+=b; swap(a,b); ++ans;
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
