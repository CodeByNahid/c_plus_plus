//Problem Link:https://codeforces.com/contest/1828/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i*2<<" \n"[i==n];
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
