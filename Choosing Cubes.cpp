//Problem Link: https://codeforces.com/contest/1980/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,f,k; cin>>n>>f>>k;
 
    vector<int>v(n);
    for(int &i:v) cin>>i;
       int g=v[f-1];
    sort(v.rbegin(),v.rend());
    bool out=0,in=0;
    for(int i=0;i<n;i++ ){
        if(v[i]==g && i+1<=k) in=1;
        if(v[i]==g && i+1>k) out=1;
        
    }
    if(in && out){cout<<"MAYBE"<<endl;}
    else if(in && !out) {cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
