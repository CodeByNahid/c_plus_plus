//Problem Link: https://www.codechef.com/problems/CHNGIT
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n; 
	    int x;
	    map<int,int>mp;
	    int y=0;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        mp[x]++;
	        if(mp[x]>y){
	            y=mp[x];
	        }
	    }
	    cout<<n-y<<endl;
	    
	    
	}

}
