//Problem Link: https://codeforces.com/problemset/problem/520/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(char i:s){st.insert(tolower(i));}
    cout<<(st.size()==26?"YES":"NO")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
