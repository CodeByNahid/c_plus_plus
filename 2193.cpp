//Problem Link: https://codeforces.com/contest/2193/problem/A
#include <bits/stdc++.h>
using namespace std;
int s(){
    int n,s,x;
    cin>>n>>s>>x;
    int y,sum=0;
    for(int i=0;i<n;i++){
        cin>>y;
        sum+=y;
        
    }
    if(sum==s ){
        cout<<"YES"<<endl;
        return 0;
    }
    if(sum>s){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<((s-sum)%x==0?"YES":"NO")<<endl;
 return 0;
    }
 
int main() {
int t; cin>>t;
while(t--){
    s();
}
}
