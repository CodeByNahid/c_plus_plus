//Problem Link: https://www.codechef.com/problems/ELEVSTRS
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s,e; cin>>n>>s>>e;
    double stn=(double(n)*1.41)/s;
    double ex=double(n)*2/e;
    cout<<(stn<ex?"Stairs":"Elevator")<<endl; return ;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
