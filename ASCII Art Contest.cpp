//Problem Link: https://codeforces.com/contest/2172/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>arr(3);
   for(auto& i:arr)cin>>i;
   sort(arr.begin(),arr.end());
   if(arr[2]-arr[0]>=10){
    cout<<"check again"<<'\n';
   }
   else{
    cout<<"final "<<arr[1]<<'\n';
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
