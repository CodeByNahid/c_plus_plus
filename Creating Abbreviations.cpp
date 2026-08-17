//Problem Link: https://codeforces.com/contest/2257/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    string s="";
    
    while(n--){
        string s1; cin>>s1;
        s += tolower(s1[0]);
    }

    bool f=1;
    
    while(m--){
        string st; cin>>st;
        
        for(int i=0; i<st.size(); i++){
            if(s.find(tolower(st[i])) != string::npos){
                continue;
            }
            else{
                f=0;
            }
        }
    }
    
    cout << (f ? "Yes" : "No") << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
