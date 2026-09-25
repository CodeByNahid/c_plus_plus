//Problem Link: https://codeforces.com/contest/2267/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    char x; cin>>x;
    string s; cin>>s;
    int ans=0;
    if (n % 2 == 0) {
    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2);
    reverse(s2.begin(), s2.end());
    if(s1==s2){
        cout<<0<<endl; return;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            if(s1[i]==x || s2[i]==x){
                ans++;
            }
   else ans+=2;
        }
    }
    
    }
    else {
    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2 + 1);
    reverse(s2.begin(), s2.end());
     if(s1==s2){
        cout<<0<<endl; return;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            if(s1[i]==x || s2[i]==x){
                ans++;
            }
   else ans+=2;
        }
    }
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
