//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        sort(a.begin(), a.end(), greater<int>());
        
        bool bad = false;
        for(int i = 1; i < n; i++)
            if(a[i] == a[i-1]) { bad = true; break; }
        
        if(bad) cout << -1 << "\n";
        else {
            for(int i = 0; i < n; i++)
                cout << a[i] << " \n"[i==n-1];
        }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}

