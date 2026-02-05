//Problem Link: https://www.codechef.com/problems/REMOVECARDS
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        map<int, int> mp;
        int x;
        int m = n;

        while (n--) {
            cin >> x;
            mp[x]++;
        }

        int ans = 0;
        for (auto &i : mp)
            ans = max(ans, i.second);

        cout << m - ans << endl;
    }
}
