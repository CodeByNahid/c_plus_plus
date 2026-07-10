//Problem Link: https://codeforces.com/contest/599/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    cout<<min(2*(d1+d2),min((d1+d2+d3), min(2*(d1+d3),2*(d2+d3))))<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
