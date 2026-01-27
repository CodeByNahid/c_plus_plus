//Problem Link: https://codeforces.com/contest/2193/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
int t; cin>>t; 
while(t--){
    int n; cin>>n;
    vector<int> v(n);
    vector<int> vr(n);
    for(int &i:v) cin>>i;
    vr=v;
    bool f=false;
    sort(vr.rbegin(),vr.rend());
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(v[i]!=vr[i]){
            l=i;
            for(int j=i;j<n;j++){
                if(vr[i]==v[j]){
                    r=j;
                    f=true;
                    break;
                }
            }
        }
        if(f) break;
    }
    if(f){
    for(int i=0;i<l;i++)cout<<v[i]<<" ";
    for(int i=r;i>=l;i--)cout<<v[i]<<" ";
    for(int i=r+1;i<n;i++)cout<<v[i]<<" ";
    
    
    cout<<endl;}
    else {
        for(int i:v) cout<<i<<" ";
        cout<<endl;
    }
    
    
}

}
