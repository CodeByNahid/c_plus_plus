//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    for(int i=0;i<n*2;i++){
        for(int j=0;j<n*2;j++) cout << "#."[(i >> 1 ^ j >> 1) & 1];
        cout<<endl; 
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
