//Problem Link: https://codeforces.com/contest/2132/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int m; cin>>m;
    string sb,c; cin>>sb>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='D'){
            s+=sb[i];
        }
        else{
            s.insert(0,1,sb[i]);
        }
    }
    cout<<s<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
