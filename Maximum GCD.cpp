//Problem Link: https://codeforces.com/contest/1370/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    if(n<=3){cout<<1<<endl; return;}
    for(int i=n/2;i>=2;i--){
        if(i*2<=n){
            cout<<i<<endl; return;
        }
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
