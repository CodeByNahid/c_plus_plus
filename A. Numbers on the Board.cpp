//Problem Link: https://codeforces.com/contest/2283/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
 int  l, r; cin>>l>>r;
    if (r < 0 || l > 0){
        cout<<(r - l)<<endl;}
    else{
        int m = min(r, -l);
        cout<<max(0, r - l - 2 * m - 1)<<endl;
        
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
