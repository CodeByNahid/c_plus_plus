//Problem Link: https://www.codechef.com/problems/ACCESS
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    string s ; cin>>s;
    int r=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') {
            if(r==0) {cout<<"NO"<<'\n';return;}
            else r--;
        }
        else r=k;
    }
    cout<<"YES"<<'\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
