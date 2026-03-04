//Problem Link: https://codeforces.com/problemset/problem/1950/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int newh = (h + 11) % 12 + 1;
    
    s[0] = newh / 10 + '0';
    s[1] = newh % 10 + '0';
    cout << s << " " << (h < 12 ? "AM" : "PM") << "\n";
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
