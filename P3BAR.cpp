//Problem Link: https://www.codechef.com/problems/P3BAR
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<int> v(n);
    for(int &i : v) cin >> i;

    int ans = 0;

    while(!v.empty()){
        int x = *max_element(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++){
            if(v[i] == x){
                ans += min(i, (int)v.size() - i - 1);
                v.erase(v.begin() + i); 
                break; 
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
