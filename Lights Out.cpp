//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
void solve(){
      int arr[3][3] , ans[3][3];
            rep(i,3) {
                rep(j,3) {
                    cin >> arr[i][j];
                    ans[i][j] = arr[i][j];
                }
            }
            rep(i,3) {
                rep(j,3) {
                    if (j!=0) ans[i][j] += arr[i][j-1];
                    if (j!=2) ans[i][j] += arr[i][j+1];
                    if (i!=0) ans[i][j] += arr[i-1][j];
                    if (i!=2) ans[i][j] += arr[i+1][j];
 
                }
            }
            rep(i,3) {
                rep(j,3) {
                    if (ans[i][j] %2==0)
                        cout << 1;
                    else cout << 0;
                }
                cout << '\n';
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
