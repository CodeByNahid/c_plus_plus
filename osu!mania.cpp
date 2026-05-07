//Problem Link: https://codeforces.com/contest/2009/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<string> v(n);
    for(auto &i : v) cin >> i;

    for(int i = n-1; i >= 0; i--){
        int pos = find(v[i].begin(), v[i].end(), '#') - v[i].begin();
        cout << pos + 1 << " ";
    }
    cout << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; 
   cin >> t;

   while (t--) {
        solve();
   }

   return 0;
}
