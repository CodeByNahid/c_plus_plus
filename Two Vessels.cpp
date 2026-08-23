//Problem Link: https://codeforces.com/contest/1872/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=abs(a-b);
    if(d==0){cout<<0<<endl; return;}
    cout<<ceil((double(d)/2)/c)<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
