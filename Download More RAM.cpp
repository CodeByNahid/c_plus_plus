//Problem Link: https://codeforces.com/contest/1629/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<pair<int, int>> v(n);
    for(auto &i:v){
        cin>>i.first;
    }
    for(auto &i:v){
        cin>>i.second;
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        if(i.first<=k){
            k+=i.second;
        }
        else break;
    }
    cout<<k<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
