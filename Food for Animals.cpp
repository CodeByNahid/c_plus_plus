//Problem Link: https://codeforces.com/contest/1675/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    x=max(0,x-a);
    y=max(0,y-b);
    if(x == 0 && y==0 || x+y<=c){
        cout<<"Yes"<<endl;
    }
    else  cout<<"No"<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
