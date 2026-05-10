//Problem Link: https://codeforces.com/contest/1097/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string m; cin>>m;
    vector<string> s(5); 
    for(auto &i:s) cin>>i;
    for(int i=0;i<5;i++){
        if(s[i][0]==m[0]){
            cout<<"YES"<<endl;
            return;
        }
    }
    for(int i=0;i<5;i++){
        if(s[i][1]==m[1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
