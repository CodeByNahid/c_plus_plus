//Problem Link: https://www.codechef.com/problems/BSCOST
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x,y;
    cin>>n>>x>>y;
    string s; ;cin>>s;
    int a=count(s.begin(),s.end(),'0');
    int b=count(s.begin(),s.end(),'1');
    cout<<(a>=1 && b>=1?min(x,y):0)<<endl; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
