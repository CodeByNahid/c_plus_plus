//Problem Link: https://codeforces.com/contest/1859/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int a=*max_element(v.begin(), v.end());
  int m=count(v.begin(), v.end(), a);
  if(m==n){
      cout<<-1<<endl;
  }
  else{
      cout<<n-m<<" "<<m<<endl;
      for(int i:v) if(a!=i) cout<<i<<" ";
      cout<<endl;
      for(int i=0;i<m;i++) cout<<a<<" ";
      cout<<endl;
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
