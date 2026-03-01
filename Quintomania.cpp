//Problem Link: https://codeforces.com/problemset/problem/2036/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])!=5 && abs(v[i]-v[i+1])!=7 ) {
            cout<<"NO"<<endl; return;
        }
    }
    cout<<"YES"<<endl; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
