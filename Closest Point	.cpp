//Problem Link: https://codeforces.com/contest/2004/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    if(n==1) {cout<<"YES"<<endl; return;}
    
    if(n>=3) {cout<<"NO"<<endl; return;}
    if(max(v[0],v[1])-1==min(v[0],v[1])) {cout<<"NO"<<endl; return;}
    else cout<<"YES"<<endl;
    
    
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
