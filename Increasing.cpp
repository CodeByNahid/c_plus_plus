//Problem Link: https://codeforces.com/contest/1742/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        s.insert(x);
    }
    cout<<(s.size()==n?"YES":"NO")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
