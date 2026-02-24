//problem link: https://codeforces.com/problemset/problem/1367/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    string s; cin>>s;
	    int n=s.size();
	    cout<<s[0];
	    for(int i=1;i<n-1;i+=2) cout<<s[i];
	    cout<<s[n-1]<<endl;
	}

}
