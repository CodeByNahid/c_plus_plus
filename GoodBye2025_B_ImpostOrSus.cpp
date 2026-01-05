#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t; cin>>t;
while(t--){
    string s;
    cin>>s;
    int ans=0;
    for(int i=1;i<s.length()-1;i++){
        if(s[i]=='u') {
            if(s[i-1]!='s') {ans++; s[i-1]='s';}
            if(s[i+1]!='s') {ans++;
            
            s[i+1]='s';}
        }
    }
    if(s[0]=='u') ans++;
    if(s[s.length()-1]=='u') ans++;
 
    cout<<ans<<endl;
}
 
}
