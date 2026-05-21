//Problem Link: https://www.codechef.com/problems/TOURPLAN
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int f=max(0,z-50);
    cout<<x+f*y<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
