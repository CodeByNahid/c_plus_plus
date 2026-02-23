//Problem Link: https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t; cin>>t;
	while(t--){
	   int n; cin>>n;
	  vector<int>v(n) ;
	  for(int &i:v) cin>>i;
	  int ans=0,tem=0;
	  for(int i=0;i<n;i++){
	      if(v[i]==1) {ans=max(ans,tem); tem=0;}
	      else tem ++;
	  }
	  ans=max(ans,tem);
	  
	  cout<<ans<<endl;
	}
return 0;
}
