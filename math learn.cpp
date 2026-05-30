//Problem link: https://codeforces.com/problemset/problem/472/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
bool isprime(long long n) {
    if (n <= 1) {
        return false; 
    }
 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return true; 
        }
    }
    return false;
}
#define ll long long
void solve(){
    ll n; cin>>n;
    for(ll i=n/2;i>=2;i--){
        if(isprime(i)&& isprime(n-i)){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
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
