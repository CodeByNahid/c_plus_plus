//Problem Link: https://codeforces.com/contest/1999/problem/D
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void p(string s){
    cout<<s<<endl;
}
void solve() 
{
    string s, t; cin >> s >> t;
    ll n = s.length(); ll m = t.length();
    ll ptr = 0; 
    for(ll i=0;i<n;i++){
        if(s[i] == '?'){
            if(ptr == m) s[i] = 'a';
            else{
                s[i] = t[ptr]; ptr++;
            }
        }
        else{
            if(ptr < m && s[i] == t[ptr]){
                ptr++;
            }
        }
    }
    if(ptr < m){
        p("NO");
    }
    else{
        p("YES");
        p(s);
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
