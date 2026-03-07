//Problem Link: https://codeforces.com/contest/2000/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    int dec=min(v[0],v[0]-1);
    int inc=min(1+v[0],n);
    for(int i=1;i<n;i++){
        if(v[i]==inc ) {
            inc++;
        }
        else if(v[i]==dec){
            
            dec--;
        
        }
        else {
            cout<<"NO"<<endl; return;
        }
        
    }
    cout<<"YES"<<endl; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
