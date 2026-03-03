//Problem Link: https://www.codechef.com/problems/LOSTWKND
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int h=24*5;
   vector<int> v(5);
   for(int &x:v) cin>>x;
   int p; cin>>p;
   int w=0;
   for(int i=0;i<5;i++){
       
       w+=v[i]*p;
   }
   cout<<(w<=h?"NO":"Yes")<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
