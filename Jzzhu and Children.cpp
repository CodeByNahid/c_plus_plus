//Problem Link: https://codeforces.com/contest/450/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    std::vector<int>v(n) ;
    for(int &i:v) cin>>i;
    int max=0,id=0;
    for(int i=0;i<n;i++){
        int needed = v[i] / k;
        if (v[i] % k != 0) needed++; 
        if (needed >= max){
            max = needed;
            id = i + 1;
        }
    }
    cout<<id<<endl; return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
