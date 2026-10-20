//Problem Link:https://codeforces.com/contest/2004/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l = 0; cin >> l; int r = 0; cin >> r;
    int L = 0; cin >> L; int R = 0; cin >> R;
    if (r < L || R < l){
        cout << "1\n";
    } else {
        cout << min(r, R) - max(l, L) + (l != L) + (r != R) << "\n";
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
