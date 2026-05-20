//Problem Link: https://codeforces.com/contest/1462/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x; cin>>x;
    if(x>45) {cout<<-1<<endl; return;}
    string s="";
    for(int i=9;i>=1;i--){
        if(x>=i){ s+=to_string(i); x-=i;}
        
    }
    sort(s.begin(),s.end());
    cout<<s<<endl;

}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
