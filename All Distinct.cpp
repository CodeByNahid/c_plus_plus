//Problem Link: https://codeforces.com/contest/1692/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  set<int>s(v.begin(),v.end());
  if(s.size()==n){ cout<<n<<"\n"; return;}
  if((n-s.size())%2==0){
      cout<<s.size()<<endl;
  }
  else cout<<s.size()-1<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
