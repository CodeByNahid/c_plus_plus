//Problem Link: https://codeforces.com/contest/1873/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
   sort(v.begin(), v.end());
   v[0]+=1;
   int ans=1;
   for(int i:v) ans*=i;
   cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
