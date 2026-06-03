//Problem Link: https://codeforces.com/contest/1624/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        s.insert(x);
        
    }
    std::vector<int>v;
    for(int i:s) v.push_back(i);
    int d=0;
    n=s.size();
    for(int i=s.size()-2;i>=0;i--){
        v[i]+=d;
        d+=v[n-1]-v[i];
    }
    cout<<d<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
