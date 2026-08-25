//Problem Link: https://codeforces.com/contest/556/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    string s; cin>>s;
    int z=count(s.begin(),s.end(),'0');
    int o=count(s.begin(),s.end(),'1');
    cout<<n- 2*min(o,z)<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
