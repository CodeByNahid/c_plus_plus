//Problem Link: https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	int x,ans=10000000;
	bool y=0;
	while(n--){
	    cin>>x;
	    if(x==0) y=1;
	    ans=min(abs(x),ans);
	    
	}
	if(y) cout<<0<<endl;
	else cout<<abs(ans)<<endl;

}
