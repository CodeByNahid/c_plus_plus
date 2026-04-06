//Problem Link: https://codeforces.com/contest/230/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s, n; 
    cin >> s >> n;

    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    
    for(auto &p : v){
        if(p.first < s){
            s += p.second;
        } else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   solve();

   return 0;
}
