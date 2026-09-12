//Problem Link: https://codeforces.com/contest/189/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b,c; cin>>n>>a>>b>>c;
    int ans=0;
    for(int x=0;x<=4000;x++){
        for(int y=0;y<=4000;y++){
            int zc=n-(x*a+y*b);
        if(zc<0) break;
        
        double z=(zc/double(c));
        
        if(z==int(z)){
            ans=max(ans,(x+y+int(z)));
        }
    }
    }
    cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
