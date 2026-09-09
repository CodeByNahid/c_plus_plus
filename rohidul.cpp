//@CodeByNahid
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        vector<pair<int,int>>pa;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i){
            int x;cin>>x;
            pa.push_back({x,a[i]});
        }
        sort(pa.begin(),pa.end(),[](const pair<int,int>& x, const pair<int,int>& y){
            if (x.first == y.first)
            return x.second > y.second; 
        return x.first < y.first;
        });  
        
        int cost=0;
        cost+=k;
        n--;
        int i=0;
        while(n!=0){
            if(pa[i].first<k){
            int len=min(n,pa[i].second);
            cost+=len*pa[i].first;
            n-=len;
            }
            else{
                cost+=n*k;
                break;
            }
            i++;
        }
        cout<<cost<<endl;
 
      
    }

    return 0;
}
