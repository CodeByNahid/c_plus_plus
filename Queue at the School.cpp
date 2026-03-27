//Problem Link: https://codeforces.com/problemset/problem/266/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    string s; cin>>s;
    while(k--){
        for(int i=1;i<n;i++){
            if(s[i]=='G' && s[i-1]=='B') {swap(s[i],s[i-1]); i++;}
        }
    }
    cout<<s<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
