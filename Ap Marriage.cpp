//@CodeByNahid

#include <bits/stdc++.h>

using namespace std;



void solve(){

    int b, c, h;

    std::cin >> b >> c >> h;

    

cout << std::min(b, c + h + 1) * 2 - 1 << "\n";

    

}



int main() {

   ios::sync_with_stdio(false);

   cin.tie(nullptr);

   int t; cin >> t; while (t--) {

        solve();

    }

}
