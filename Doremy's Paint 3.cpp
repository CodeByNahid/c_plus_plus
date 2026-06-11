//Problem Link: https://codeforces.com/contest/1890/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n;
	map<int,int>mp;
	for(int i=0;i<n;i++){
	    int x; cin>>x;
	    mp[x]++;
	}
	if(mp.size()>2){
	    cout<<"NO"<<endl; return;
	}
	if(mp.begin()->second==mp.rbegin()->second) {
	    cout<<"YES"<<endl;
	    
	}
	else if(n%2==1 && abs(mp.begin()->second-mp.rbegin()->second)==1)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
