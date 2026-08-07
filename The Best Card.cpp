//Problem Link: https://codeforces.com/contest/2253/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    ll i=2;
    while(i<n+1){
        if((n+1)%i==0){
            cout<<"NO"<<endl;
            return;
        }
        i++;
    }
    cout<<"YES"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
