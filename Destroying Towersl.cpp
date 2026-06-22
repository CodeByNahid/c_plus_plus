//Problem Link: https://codeforces.com/contest/2237/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    int ans=v[0];
    int ch=v[0];
    for(int i=1;i<n;i++){
       if(v[i]>ch) ans+=ch;
       else{
           ans+=v[i];
           ch=v[i];
       }
    }
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
