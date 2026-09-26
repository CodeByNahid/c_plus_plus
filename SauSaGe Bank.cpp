//Problem Link: https://codeforces.com/contest/2269/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    if(n==k){cout<<2*n<<endl; return;}
    int ans=pow(2,n-(k-1))+2*(k-1);
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
