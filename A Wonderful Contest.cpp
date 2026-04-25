//Problem Link: https://codeforces.com/contest/2222/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    std::vector<int>v(n) ;
    for(int &i:v) cin>>i;
    auto x=find(v.begin(),v.end(),100);
    cout<<(x!=v.end()?"Yes":"No")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
