//Problem Link: https://codeforces.com/contest/1462/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int &i:v)cin>>i;
	    int i=0,j=n-1;
	    
	    while(i<=j){
	       
	            cout<<v[i]<<" ";
	          if(i!=j)  cout<<v[j]<<" ";
	            i++; j--;
	    }
	    cout<<endl;
	}

}
