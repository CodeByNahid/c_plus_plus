//Problem Link:https://codeforces.com/contest/1837/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    if(n%k){
        cout<<1<<"\n"<<n<<"\n"; return;
    }
    cout<<2<<"\n"<<n-(k+1)<<" "<<k+1<<"\n"; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
