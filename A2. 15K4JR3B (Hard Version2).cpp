//Problem Link: https://codeforces.com/contest/2284/problem/A2
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>a(n);
  for(int &i:a) cin>>i;
  sort(a.begin(),a.end());
        long long b=0,c=0;
        for(int i=n-1;i>=0;i--) {
            if(b<c) {
                b+=round(pow(2,a[i]));
            }
            else c+=round(pow(2,a[i]));
        }
        cout << b*c << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
