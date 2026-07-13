//Problem Link: https://codeforces.com/contest/102/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n; cin>>n;
    int ans=0;
    while(n.size()>1){
        int tem=0;
       for(char i:n){
           tem+=i-'0';
       }
       n=to_string(tem);
        ans++;
    }
    cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
