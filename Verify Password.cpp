//@CodeByNahid
//Problem Link: https://codeforces.com/contest/1976/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string news=s;
    sort(news.begin(),news.end());
    cout<<(s==news?"YES":"NO")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
