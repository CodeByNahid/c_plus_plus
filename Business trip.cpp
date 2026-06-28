//Problem Link: https://codeforces.com/contest/149/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k; cin>>k;
    if(k==0){
        cout<<0<<endl; return;
    }
    vector<int>v(12);
    for(int &i:v) cin>>i;
    sort(v.rbegin(),v.rend());
    int ans=0;
    int c=0;
    while(ans<k && c<12){
        ans+=v[c];
        c++;
    }
    cout<<(ans>=k?c:-1)<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
