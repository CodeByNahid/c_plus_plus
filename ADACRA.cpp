//Problem Link: https://www.codechef.com/problems/ADACRA
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int ans=1;
    for(int i=0;i<(s.length()-1);i++){
	        if(s[i]!=s[i+1]){
	            ans++;
	        }
	    }
    cout<<ans/2<<'\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
