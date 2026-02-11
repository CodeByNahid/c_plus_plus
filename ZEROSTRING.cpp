//Problem Link: https://www.codechef.com/problems/ZEROSTRING

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin>>t; 
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    set<char> st(s.begin(),s.end());
	    if (st.size()==1 && s[0]=='0'){ cout<<0<<endl; continue;}
	    if (st.size()==1 && s[0]=='1') {cout<<1<<endl; continue;}
	    int o=0,z=0;
	    for(auto i:s) {if(i=='0') z++; else o++; }
	    
	     if(z==o) cout<<o<<endl; 
	    else if(z>=o+1) cout<<o<<endl;
	    else cout<<z+1<<endl;
	}

}
