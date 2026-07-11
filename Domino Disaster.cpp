//Problem Link: https://codeforces.com/contest/1567/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == 'L' || s[i] == 'R') ans += s[i];
            else if(s[i] == 'U') ans += 'D';
            else ans += 'U';
        }
        cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
