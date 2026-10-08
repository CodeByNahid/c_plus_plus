//Problem Link: https://codeforces.com/contest/1921/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s,m; cin>>s>>m;
    int z=0,o=0;
    for(int i=0;i<n;i++){
    if(s[i]!=m[i]){
    if(m[i]=='1') o++;
    else z++;
    }
    }
    cout <<max(z,o)<< endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
