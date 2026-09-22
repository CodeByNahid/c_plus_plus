//Problem Link: https://codeforces.com/contest/711/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<string>v(n);
    bool f=0;
    for(auto &i:v) cin>>i;
    for(int i=0;i<n;i++){
        if(v[i][0]==v[i][1] && v[i][1]=='O'){
            v[i][0]='+';
            v[i][1]='+';
            f=1;
            break;
        }
        if(v[i][4]==v[i][3] && v[i][3]=='O'){
            v[i][3]='+';
            v[i][4]='+';
             f=1;
             break;
        }
    }
    if(f){
        cout<<"YES"<<"\n";
    for(auto i:v) cout<<i<<"\n";
    }
    else cout<<"NO"<<"\n";
    
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
