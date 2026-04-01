//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    for(int i=1;i<s.size();i++){
        string a=s.substr(0,i);
        string b=s.substr(i);
        if(b[0]!='0' && stoi(b)>stoi(a)){
            cout<<a<<" "<<b<<endl; return;
        }
    }
    cout<<-1<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
