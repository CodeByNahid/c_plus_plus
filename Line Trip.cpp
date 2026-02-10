//Problem Link: https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;
int s(){
     int n,x; cin>>n>>x;
    std::vector<int>v(n) ;
    for(int &i:v) cin>>i;
  
    int ans=INT_MIN;
    for(int i=0, p=0;i<n;i++)
    {
        ans=max(ans,v[i]-p);
        p=v[i];
        
    }
    ans=max(ans,(x-v[n-1])*2);
    cout<<ans<<endl;
    return 0;
}
int main() {
int t; cin>>t; while(t--){
   s();
}

}
