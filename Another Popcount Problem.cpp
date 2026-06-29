//Problem Link:
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    if(k>=n) cout<<n<<endl;
    else{
        int ans = 0, curr = 1;
        for(int i=0;i<30;i++){
            int canFit = n / curr;
            int use = min(k, canFit);
            n -= (use * curr);
            ans += use;
            curr *= 2;
        }
        cout<<ans<<endl;
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
