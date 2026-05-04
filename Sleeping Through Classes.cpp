//Problem Link: https://codeforces.com/contest/2173/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int ans=0,tem=0;
    bool f;
    for(int i=0;i<n;i++){
        if(tem<=0) f=1;
        if(s[i]=='1'){
           tem=k;
           f=0;
           continue;
        }
        else if(f && s[i]=='0') ans++;
        tem--;
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
