//Problem Link: https://codeforces.com/contest/2209/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
int query(int i, int j) {
   cout << "? " << i + 1 << " " << j + 1 << std::endl;
    int ans;
    std::cin >> ans;
    return ans;
}

void solve(){
    int n; cin>>n; 
    for (int i = 2; i < 2 * n; i += 2) {
        if (query(i, i + 1) == 1) {
            std::cout << "! " << i + 1 << std::endl;
            return;
        }
    }
    
    if (query(0, 2) == 1 || query(0, 3) == 1) {
        std::cout << "! " << 1 << std::endl;
    } else {
        std::cout << "! " << 2 << std::endl;
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
