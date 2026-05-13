//Problem Link: https://codeforces.com/contest/2060/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,d,e;
 cin >>a>>b>>d>>e;
        set<int>s;
        s.insert(a+b);
        s.insert(d-b);
        s.insert(e-d);
        cout<<(4-s.size())<<endl;   
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
