//Problem Link: https://codeforces.com/contest/1433/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int tem=n%10;
    int ans=10*(tem-1);
    int d=0;
    while(n>0){
        n/=10;
        d++;
    }
    ans+=(d*(d+1))/2;
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
