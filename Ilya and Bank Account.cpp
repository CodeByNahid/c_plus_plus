//Problem Link:https://codeforces.com/contest/313/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s[0] != '-') {
        cout << s << endl;
        return;
    }
    int y = s.size();
    string a = s.substr(0, y - 1);
    string b = s.substr(0, y - 2) + s.substr(y - 1, 1);

    int n = stoi(a);
    int nn = stoi(b);

    cout << max(n, nn) << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
