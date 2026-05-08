//Problem Link: https://codeforces.com/contest/1791/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int i=0;
    int uper=0,lower=0;
    while(i<n){
        if(s[i]=='U') uper++;
        if(s[i]=='D') uper--;
        if(s[i]=='R') lower++;
        if(s[i]=='L') lower--;
        if(uper==1 && lower==1) {
            cout<<"YES\n";
            return;
        }
        i++;
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
