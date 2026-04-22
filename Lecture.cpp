//Problem Link: https://codeforces.com/contest/499/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    map<string,int>mp;
    vector<string>v;
    int i=0;
    string a,b;
    while(m--){
        cin>>a>>b;
        if(a.size()>b.size()){
            v.push_back(b);
            mp[a]=i;
            mp[b]=i;
            i++;
        }
        else {
             v.push_back(a);
            mp[a]=i;
            mp[b]=i;
            i++;
        }
        
    }
    vector<string>s(n);
    for(auto &k:s) cin>>k;
    for(int k=0;k<n;k++){
        cout<<v[mp[s[k]]]<<" ";
    }
    cout<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
