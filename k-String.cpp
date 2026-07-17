//Problem Link: https://codeforces.com/contest/219/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    map<char,int>mp;
    for(char i:s) mp[i]++;
    for(auto i:mp){
        if(i.second%n!=0){
            cout<<-1<<endl;
            return;
        }}
         string san="";
         for(auto i:mp) san += string(i.second / n, i.first);
         for(int i=0;i<n;i++){
             cout<<san;
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
