//Problem Link: https://codeforces.com/contest/451/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<long long> b = a;
    sort(b.begin(), b.end());
 
    int L = 0, R = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            L = i;
            break;
        }
    }
 
    for (int i = n-1; i >= 0; i--) {
        if (a[i] != b[i]) {
            R = i;
            break;
        }
    }
 
    reverse(a.begin() + L, a.begin() + R+1);
 
    if (a == b) {
        cout << "yes" << "\n" << L+1 << " " << R+1 << "\n";
    } else {
        cout << "no" << "\n";
    }
 
    return;
 
}


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
