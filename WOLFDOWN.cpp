//Problem Link: https://www.codechef.com/problems/WOLFDOWN

#include <bits/stdc++.h>
using namespace std;
int s(){
    int n; cin>>n;
	    string s; cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            return i;
	        }
	    }
	    return n;
}
int main() {
	int t; cin>>t;
	while(t--){
	    
	    cout<<s()<<endl;
	}

}
