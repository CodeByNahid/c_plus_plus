//Problem Link: https://codeforces.com/problemset/problem/1980/A

#include <bits/stdc++.h>
using namespace std;

int main() {
int t; cin>>t; while(t--){
    int n,m; cin>>n>>m;
   int ans=0;
    map<char,int>mp;
    string s="ABCDEFG";
     char x; 
     while(n--){
         cin>>x;
         mp[x]++;
     }
     for(int i=0;i<7;i++){
     
         if(mp[s[i]]<m) ans+=m-mp[s[i]];
     }
     cout<<ans<<endl;
     
     
}

}
