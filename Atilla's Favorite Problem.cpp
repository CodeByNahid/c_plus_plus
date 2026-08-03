//Problem Link: https://codeforces.com/contest/1760/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    std::cout << *std::max_element(s.begin(), s.end()) - 'a' + 1 << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
