//Problem link: https://www.codechef.com/problems/MISSP
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	while (t--){
	    int n; cin>>n;
	    map<int,int>m;
	    set<int>s;
	    int x;
	    while(n--){
	        cin>>x;
	        m[x]++;
	        s.insert(x);
	    }
	    for(auto i:s)
	    {
	        if(m[i]%2!=0) {
	            cout<<i<<endl;
	        break;
	            
	        }
	    }
	    
	    
	}

}
