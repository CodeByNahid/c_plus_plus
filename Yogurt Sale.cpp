//Problem Link: https://codeforces.com/contest/1955/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b; cin>>n>>a>>b;
    int offer=(n/2)*b+(n-2*(n/2))*a;
    cout<<min(offer,(n*a))<<'\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
