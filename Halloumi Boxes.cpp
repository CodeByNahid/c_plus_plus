//Problem Link: https://codeforces.com/contest/1903/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    std::vector<int>v(n);
    for(int &i:v) cin>>i;
    if(k>=2) cout<<"YES"<<endl;
    else {
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]) {cout<<"NO"<<endl; return;}        
            
        }
        cout<<"YES"<<endl;
    }
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
