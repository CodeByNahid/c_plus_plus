// Problem Link: https://www.codechef.com/problems/SORTPREF
#include <bits/stdc++.h>
using namespace std;
int s(){
    int n; cin>>n;
    vector<int >v(n) ;
    for(int &i:v) cin>>i;
    for(int i=n-1;i>=0;i--){
        if(v[i]!=(i+1))
        {return v[i];}
    }
    return 0;
}
int main() {
    int t; cin>>t; while(t--){
cout<< s() <<endl;
        
    }

}
