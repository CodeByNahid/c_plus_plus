//ProblemLink: https://codeforces.com/contest/1555/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long    
void solve(){
   ll n;
    cin >> n;
    
    ll slice = std::max(3LL, (n + 1) / 2);
    
   cout << 5 * slice << "\n";
}
    
    
    


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
