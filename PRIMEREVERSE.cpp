//problem Link: https://www.codechef.com/problems/PRIMEREVERSE
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    string s1,s2; cin>>s1>>s2;
	    
	    int a=count(s1.begin(),s1.end(),'1');
	    int b=count(s2.begin(),s2.end(),'1');
	    cout<<(a==b?"YES":"NO")<<endl;
	}

}
