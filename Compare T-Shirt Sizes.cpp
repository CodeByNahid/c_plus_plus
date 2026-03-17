//Problem Link: https://codeforces.com/contest/1741/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
int f(auto a) {
    if (a == "M") {
        return 0;
    } else if (a.back() == 'S') {
        return -int(a.length());
    } else {
        return a.length();
    }}
void solve(){
    std::string a, b;
    std::cin >> a >> b;
    
    if (f(a) < f(b)) {
        std::cout << "<\n";
    } else if (f(a) == f(b)) {
        std::cout << "=\n";
    } else {
        std::cout << ">\n";
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
