//Problem Link: https://codeforces.com/contest/2051/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v1(n),v2(n);
    for(int &i:v1) cin>>i;
    for(int &i:v2) cin>>i;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(v1[i]>v2[i+1]) ans+=v1[i]-v2[i+1];
    }
    ans+=v1[n-1];
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
