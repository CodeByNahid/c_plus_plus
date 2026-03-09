//Problem Link: https://codeforces.com/contest/2207/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n; 
    string s; cin>>s;
    for(int i=1;i<n-1;i++){
        if(s[i+1]=='1' && s[i-1]=='1' ) s[i]='1';
    }
    int ones=count(s.begin(),s.end(),'1');
    for(int i=1;i<n-1;i++){
        if(s[i+1]=='1' && s[i-1]=='1')s[i]='0';
    }
    int zeroes=count(s.begin(),s.end(),'0');
    cout<<n-zeroes<<" "<<ones<<endl;
    return;
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
