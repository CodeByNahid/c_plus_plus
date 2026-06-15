//Problem Link: https://codeforces.com/contest/1607/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    string ss; cin>>ss;
    char hand_on=ss[0];
    map<char,int>mp;
    int j=1;
    for(char i:s) mp[i]=j++;
    int ans=0;
    for(int i=1;i<ss.size();i++){
        if(ss[i]!=hand_on) {
        ans+=abs(mp[ss[i]]-(mp[hand_on]));
        hand_on=ss[i]; }
        
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
