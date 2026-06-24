//Problem Link: https://codeforces.com/contest/1703/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    int y=0;
    while(n--){
       int k; cin>>k;
        string s; cin>>s;
        for (auto c : s) {
            if (c == 'U') {
                v[y] = (v[y] + 9) % 10;
            } else {
               v[y] = (v[y] + 1) % 10;
            }
        }
        y++;
    }
    for(int i:v) cout<<i<<" ";
    cout<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
