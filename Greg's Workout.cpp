//Problem Link: https://codeforces.com/contest/255/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum[3] = {0, 0, 0};
    string s[3] = {"chest", "biceps", "back"};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum[i % 3] += x;
    }

    int ans = 0;
    for (int i = 1; i < 3; i++) {
        if (sum[i] > sum[ans])
            ans = i;
    }

    cout << s[ans] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
