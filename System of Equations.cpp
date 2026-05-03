//Problem Link: https://codeforces.com/contest/214/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; 
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
             if(i*i+j==n && j*j+i==m) ans++;
            
        }
    }
    cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
