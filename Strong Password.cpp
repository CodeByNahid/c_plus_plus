//Problem Link: https://codeforces.com/contest/1997/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
char nxt(char c){
    if(c=='z') return 'a';
    return c+1;
}
void solve(){
    string s; cin>>s;
    if(s.size()==1){cout<<s+nxt(s[0])<<endl; return;}
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
             s.insert(i, 1, nxt(s[i]));
             cout<<s<<endl; return;

        }
    }
    cout<<s+nxt(s[s.size()-1])<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
