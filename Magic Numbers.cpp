//Problem Link: https://codeforces.com/contest/320/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int i = 0;
    bool ok = true;

    while (i < s.size()) {
        if (s[i] != '1') {
            ok = false;
            break;
        }

        i++;

        if (i < s.size() && s[i] == '4')
            i++;

        if (i < s.size() && s[i] == '4')
            i++;
    }

    cout << (ok ? "YES" : "NO");

    return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
