//Problem Link: https://codeforces.com/contest/1433/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int l=0,r=0;
  for(int i=0;i<n;i++) 
  { if(v[i]==1) { l=i; 
    break;
  }}
  for(int i=n-1;i>=0;i--)
  { if(v[i]==1) { r=i; 
    break;
  }
  }
  int ans = count(v.begin() + l, v.begin() + r + 1, 0);
  cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
