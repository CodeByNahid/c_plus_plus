//Problem Link: https://codeforces.com/contest/2244/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int &i:v){
        cin>>i;
    }
   int ex=0;
   if(v[0]>1) {ex=v[0]-1;
   v[0]=1;
   }
   
   for(int i=1;i<n;i++){
       
    if(v[i-1]<v[i]){
           ex+=max(0,v[i]-(v[i-1]+1));
           v[i]=v[i-1]+1;
       }
    else if(v[i-1]>=v[i] && v[i-1]<v[i]+ex)
    {
        ex=v[i]+ex-(v[i-1]+1);
         v[i]=v[i-1]+1;
    }
       else{
           cout<<"NO"<<endl; return;
       }
       
   }
   cout<<"YES"<<endl;
    
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
