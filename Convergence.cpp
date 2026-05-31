//Problem Link: https://codeforces.com/contest/2232/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int mid=v[n/2];
    int ans=0,l=0,r=n-1;
    while(l<=r){
        if(v[l]==mid && v[r]==mid) break;
        l++;r--;
        ans++;
    }
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
