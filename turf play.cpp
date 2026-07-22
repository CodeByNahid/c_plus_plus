//@CodeByNahid

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){

    int n;

    cin >> n;

       int a[n];

       for(int i = 1; i <= n; i++){

        cin >> a[i];

       }

       set<ll>s;

       vector<ll>ans;

       for(int i = n; i > 0; i--){

        if(s.find(a[i])==s.end()){

            ans.push_back(a[i]);

            s.insert(a[i]);

        }

       }

       cout << ans.size() << '\n';

       reverse(ans.begin(),ans.end());

       for(ll i = 0; i < ans.size();i++){

        cout << ans[i] << " ";

       }

}



int main() {

   ios::sync_with_stdio(false);

   cin.tie(nullptr);

   int t; cin >> t; while (t--) {

        solve();

    }

return 0;

}
