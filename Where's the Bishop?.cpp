//Problem Link: https://codeforces.com/contest/1692/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
     char s[8][8]; 
    for(int i=0;i<8;i++) 
    for(int j=0;j<8;j++){ 
        cin>>s[i][j];
    }
     for(int i=0;i<8;i++)
     for(int j=0;j<8;j++){ 
         if(s[i][j]=='#' && s[i-1][j-1]=='#' && s[i-1][j+1]=='#'&& s[i+1][j-1]=='#' && s[i+1][j+1]=='#'){
             cout<<i+1<< " "<<j+1<<endl; return;
         }
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
