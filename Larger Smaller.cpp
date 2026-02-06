//Problem Link: https://www.codechef.com/problems/LARGSMALL
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    vector<int>v(n);
	    for(int &i:v) cin>>i;
	    sort(v.rbegin(),v.rend());
	    cout<<((v[0]-v[n-1]-1)>0?(v[0]-v[n-1]-1):0)<<endl;
	}

}
