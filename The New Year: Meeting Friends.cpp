//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    cout<<max({a,b,c})-min({a,b,c})<<endl;
    return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
