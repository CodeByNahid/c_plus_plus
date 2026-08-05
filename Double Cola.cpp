//Problem Link: https://codeforces.com/contest/82/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    std::vector<string>s={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n; cin>>n;
    
     int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }
   
        cout << s[(n - 1) / r] << endl;
 
        
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
