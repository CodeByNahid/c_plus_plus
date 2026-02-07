//Problem Link: https://codeforces.com/problemset/problem/977/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++) {
        mp[s.substr(i, 2)]++;
    }

    string ind;
    int ans = 0;

    for (auto &i : mp) {
        if (i.second > ans) {
            ind = i.first;
            ans = i.second;
        }
    }

    cout << ind << endl;
}
