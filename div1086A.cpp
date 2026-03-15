//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    map<int, int> freq;
    int maxF = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x;
            cin >> x;
            freq[x]++;
            maxF = max(maxF, freq[x]);
        }
    }
    
    int tem = n * n - n;
    if(maxF> tem) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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