//Problem Link: https://codeforces.com/problemset/problem/1840/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int i=0,j=1;
	    while(i<n && j<n){
	        if(s[i]==s[j]){
	            cout<<s[i];
	            i=j+1;
	            j=i+1;
	        }
	        else j++;
	    }
	    cout<<endl;
	}

}
