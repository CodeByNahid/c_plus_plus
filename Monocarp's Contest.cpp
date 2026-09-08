//Problem Link: https://codeforces.com/contest/2260/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    if(v[0]==0 && v[n-1]==0){
        cout<<0<<endl; return;
    }
    int f=std::count(v.begin(), v.end(), 0);
    if(v[0]==0 && f>=2 || v[n-1]==0 && f>=2  ) cout<<1<<endl;
    else if(f<2) cout<<-1<<endl;
    else cout<<2<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
