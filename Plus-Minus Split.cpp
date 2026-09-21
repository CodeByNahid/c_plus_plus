//Problem Link: https://codeforces.com/contest/1919/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
        cin >> n;
        string s;
        cin >> s;
        int m = count(s.begin(),s.end(),'-');
         int p = count(s.begin(),s.end(),'+');
        cout << abs(m-p) << "\n";
    }
    


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
