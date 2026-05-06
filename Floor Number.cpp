//Problem Link: https://codeforces.com/contest/1426/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x; cin>>n>>x;
    if(n<=2){cout<<1<<endl; return;}
    int p=3;
    int i=1;
   while(true){
        if(n>=p && n<=(i*x+2)){
            cout<<i+1<<endl; return;
        }
        else p=(i*x+2)+1;
        i++;
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
