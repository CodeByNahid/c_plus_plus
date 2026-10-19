//Problem Link: DSA Monday
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int l=0,j=n-k;
  int st=0,en=j;
  int sum=accumulate(v.begin(), v.begin()+j, 0);
  for(int i=j;i<n;i++){
      int tem=sum-v[l]+v[i];
      if(tem>sum){
          sum=tem;
          st=l;
          en=i;
      }
      l++;
  } 
  for(int y=st;y<=en;y++) cout<<v[y]<<" ";
  cout<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
