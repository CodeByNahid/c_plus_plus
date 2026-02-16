//Problem Link: https://www.codechef.com/problems/ENDSORTED
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    vector<int>v(n);
	    for(int &i:v) cin>>i;
	    if(v[0]==1 && v[n-1]==n) cout<<0<<endl;
	    else{
	        int s=0,e=0;
	        for(int i=0;i<n;i++){
	            if(v[i]==1) s=i;
	            if(v[i]==n) e=i;
	        }
	        if(s>e){
	            cout << s + (n - e - 1) - 1 << endl;
	            
	        }
	        else cout << s + (n - e - 1) << endl;
	    }
	}

}
