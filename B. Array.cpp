
//Problem Link: https://codeforces.com/contest/2209/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    
    int mn=0,mx=0;
    for(int i=0;i<n;i++){
        mn=0,mx=0;
        for(int j=i+1;j<n;j++){
            if(v[j]>v[i]) mx++;
            if(v[j]<v[i]) mn++;
        }
        cout<<max(mx,mn)<<" ";
    }
    cout<<"\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
