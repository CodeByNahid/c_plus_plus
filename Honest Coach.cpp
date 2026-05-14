//Problem Link:https://codeforces.com/contest/1360/problem/B
//@CodeByNahid
#include <bits/stdc++.h>


void solve(){
    int n; std::cin>>n;
    std::vector<int>v(n);
    for(int &i:v) std::cin>>i;
    std::sort(v.begin(), v.end());
    int ans=INT_MAX;
    for(int i=1;i<n;i++){
        ans=std::min(ans,v[i]-v[i-1]);
    }
    std::cout << ans << std::endl;
    
}

int main() {
   std::ios::sync_with_stdio(false);
   std::cin.tie(nullptr);
   int t; std::cin >> t; while (t--) {
        solve();
    }
return 0;
}
