//Problem Link: https://codeforces.com/contest/1714/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,h,m;
    cin>>n>>h>>m;
   int ans=INT_MAX;
    int mt=h*60+m;
    while(n--){
        int hh,mm;
        cin>>hh>>mm;
        int tem=(((hh*60)+mm)-mt+1440)%1440;
        ans=min(ans,tem);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
