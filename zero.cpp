//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
     int a,b,c;
        cin>>a>>b>>c;
        while(a>0){
            a--;
            b-=2;
        }while(b>0){
            b--;
            c-=3;
        }
        if(a==0 && b==0 && c==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}