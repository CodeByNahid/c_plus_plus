//Problem Link: https://www.codechef.com/problems/ATTENDU
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int ans=0;
	    for(char i:s) if(i=='1') ans++;
	    ans=ans+(120-n);
	    
	    float per=(ans*100)/120;
	    
	    cout<<(per>=75?"YES":"NO")<<endl;
	}

}
