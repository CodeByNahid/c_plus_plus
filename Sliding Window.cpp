//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; 
    cin >> n >> k;

    string s; 
    cin >> s;

    int cnt = count(s.begin(), s.begin() + k, 'W');

    int ans = cnt;
    
    for(int i = k; i < n; i++){
        if(s[i] == 'W') cnt++;       
        if(s[i-k] == 'W') cnt--;      

        ans = min(ans, cnt);
    }

    cout << ans << "\n";
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; 
   cin >> t;

   while (t--) {
        solve();
    }
    return 0;
}
