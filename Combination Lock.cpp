//Problem Link: https://codeforces.com/contest/540/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int ny; cin>>ny;
    string s1,s2; cin>>s1>>s2;
    int ans=0;
    for(int i=0;i<s1.size();i++)
    {
        int m=s2[i]-'0';
        int n=s1[i]-'0';
        
        ans+=min(abs(m-n),10-abs(n-m));
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
