//Problem Link: https://codeforces.com/contest/2000/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
     if (s.size() >= 3 && s[0] == '1' && s[1] == '0' && s[2] != '0' && stoi(s.substr(2)) >= 2) {
       cout << "YES\n"; return;
    }
    cout<<"NO"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
