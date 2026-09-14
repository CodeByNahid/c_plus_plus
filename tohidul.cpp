//Problem Link: https://codeforces.com/contest/2123/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,j,k;cin>>n>>j>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(k>=2){
        cout<<"YES"<<'\n';
        return;
    }
    unordered_map<int,int>mp;
    int t=a[j-1];
    for(auto it:a)mp[it]++;
    sort(a.begin(),a.end());
    cout<<(mp[t]==n || t==a[n-1]? "YES":"NO")<<'\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
