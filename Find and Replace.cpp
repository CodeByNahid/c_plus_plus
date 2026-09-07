//Problem Link: https://codeforces.com/contest/1807/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin >> n;
    string s; cin >> s;
    map<char, char> mp;
  for (int i = 0; i < n; i++) {

        if (mp.find(s[i]) == mp.end()) {

            mp[s[i]] = (i % 2 == 0 ? 'e' : 'o');
        }
        else {

            if (i % 2 == 0 && mp[s[i]] != 'e') {
                cout << "No\n";
                return;
            }

            if (i % 2 != 0 && mp[s[i]] != 'o') {
                cout << "No\n";
                return;
            }
        }
    }

    cout << "Yes\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
