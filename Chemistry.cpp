//Problem Link: https://codeforces.com/problemset/problem/1883/B
#include <bits/stdc++.h>
using namespace std;
int s(){
     int n,k; 
	    cin>>n>>k;
	    string s; cin>>s;
	    
	    map<char,int>mp;
	    for(char i:s) mp[i]++;
	    int ans=0;
	    for(auto i:mp){
	        if(i.second%2!=0) ans++;
	    }
	    if(ans>k+1){
	        cout<<"NO"<<endl;
	    }
	    else cout<<"YES"<<endl;
	    return 0;
}
int main() {
	int t; cin>>t; while(t--){
	   s();
	}

}
