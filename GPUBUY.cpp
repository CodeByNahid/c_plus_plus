//Problem Link: https://www.codechef.com/problems/GPUBUY
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
     if(y>=z){ cout<< -1<<endl; return;}
    int differ = z-y;
    int ans =(x+differ-1)/differ;
    cout<< ans<<endl; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
