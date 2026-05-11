//Problem Link: https://codeforces.com/contest/509/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
   int a[n+1][n+1] ;
   for(int i=1;i<=n;++i){
		a[i][1]=a[1][i]=1;
	}
	for(int i=2;i<=n;++i){
		for(int j=2;j<=n;++j){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n][n]<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
