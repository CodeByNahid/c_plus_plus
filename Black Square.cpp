//Problem Link: https://codeforces.com/problemset/problem/431/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    map<int,int>mp;
    int x; 
    for(int i=1;i<=4;i++){
        cin>>x;
        mp[i]=x;
    }
    string s; cin>>s;
    int ans=0;
    for(char i:s){
        ans+=mp[i-'0'];
    }
    cout<<ans<<endl; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
