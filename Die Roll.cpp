//Problem Link: https://codeforces.com/contest/9/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int y,w;
    scanf("%d%d",&y,&w);
	int a=7-max(y,w),b=6,g=__gcd(a,b);
	printf("%d/%d\n",a/g,b/g);
	return;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
