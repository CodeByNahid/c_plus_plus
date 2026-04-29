//Problem Link: https://codeforces.com/contest/474/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    cin>>v[0];
    int y;
    for(int i = 1; i < n; i++){
        cin >> y;
        v[i] = v[i-1] + y;
    }

    int m; cin >> m;
    vector<int> vt(m);
    for(int &i : vt) cin >> i;

    for(int i = 0; i < m; i++){
        int l = 0, r = n - 1;
        int ans = -1;

        while(l <= r){
            int mid = (l + r) / 2;

            if(v[mid] >= vt[i]){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << ans + 1 << "\n";
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   solve();

   return 0;
}
