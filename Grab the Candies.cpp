//Problem Link: https://codeforces.com/contest/1807/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
   cin >> n;
    
    int x = 0;
    for (int i = 0; i < n; i++) {
        int a;
       cin >> a;
        
        x += (a % 2 == 0 ? a : -a);
    }
   cout << (x > 0 ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
