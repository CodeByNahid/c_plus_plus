//Problem Link: https://codeforces.com/contest/1790/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s="3141592653589793238462643383279502",pi;
    cin>>pi;
    int ans=0;
    for(int i=0;i<pi.size();i++){
        if(pi[i]==s[i]) ans++;
        else break;
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
