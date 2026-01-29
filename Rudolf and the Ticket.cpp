//Problem Link: https://codeforces.com/problemset/problem/1941/A
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t; while(t--){
    int n,m,k; cin>>n>>m>>k;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int &i:v1) cin>>i;
    for(int &i:v2) cin>>i;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
   int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v1[i]+v2[j]<=k)ans++;
            if(v2[j]>=k) break;
        }
        if(v1[i]>=k) break;
    }
   cout<<ans<<endl;
}

}
