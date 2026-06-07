//Problem Link:https://codeforces.com/contest/2234/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    std::sort(v.rbegin(), v.rend());
    if(n==2){
        cout<<v[0]<<" "<<v[1]<<endl; return;
        
    }
    for(int i=0;i<n-2;i++){
        if(v[i]%v[i+1]!=v[i+2]){
            cout<<-1<<endl; return;
        }
    }
    cout<<v[0]<<" "<<v[1]<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
