//Problem Link:https://codeforces.com/contest/1873/problem/D
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            ans++;
            i+=k-1;
        }
    }
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
