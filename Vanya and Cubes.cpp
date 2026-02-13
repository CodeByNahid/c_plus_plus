//Problem Link: https://codeforces.com/problemset/problem/492/A
#include <bits/stdc++.h>
using namespace std;
int mul(int n){
    return (n*(n+1))/2;
}
int main() {
int n; cin>>n;
int m=n;
int ans=0;
for(int i=1;i<=n;i++){
    if(mul(i)<=m){
        ans++;
        m-=mul(i);
    }
    if(m<=0)break;
}
cout<<ans<<endl;

}
