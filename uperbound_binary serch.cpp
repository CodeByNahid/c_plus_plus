//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& v, int target) {
    int left = 0;
    int right = v.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (v[mid] <= target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return left;
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    sort(v.begin(),v.end());
    int m; cin>>m;
    while(m--){
        int x; cin>>x;
        cout<<binarySearch(v,x)<<"\n";
        
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
