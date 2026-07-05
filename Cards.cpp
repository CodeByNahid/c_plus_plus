//Problem Link: https://codeforces.com/contest/1220/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int z=count(s.begin(),s.end(),'z');
    int nn=count(s.begin(),s.end(),'n');
    for(int i=0;i<nn;i++){
        cout<<1<<" ";
    }
     for(int i=0;i<z;i++){
        cout<<0<<" ";
    }
    cout<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
