//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  int n; cin>>n;
  
  int c=0,b=0;
  for(int j=0;j<n;j++) {
      int i; cin>>i;
      if(i>=2)c++;
      if(i>=3) b++;
  }
  cout<<((c>=2 || b)?"yes":"no")<<endl;
  
}
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
