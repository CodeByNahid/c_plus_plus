//Problem Link: https://codeforces.com/contest/119/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
bool j(int i){
    if(i%2==0) true;
    else false;
}
void solve(){int a, b, n;
    cin >> a >> b >> n;
    int turn = 0; 
    while (true) {
        int g = (turn == 0) ? __gcd(a, n) : __gcd(b, n);

        if (g > n) {
            cout << (turn ^ 1) << '\n';
            break;
        }
        n -= g;

        if (n == 0) {
            cout << turn << '\n';
            break;
        }
        turn ^= 1;
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
