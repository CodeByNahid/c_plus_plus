//Problem Link: https://codeforces.com/contest/432/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    int m=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(5-x>=k) m++;
    }
    cout<<m/3<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
