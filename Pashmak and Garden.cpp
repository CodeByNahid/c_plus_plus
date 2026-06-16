//Problem Link: https://codeforces.com/contest/459/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x[2],y[2];
   scanf("%d%d%d%d",x,y,x+1,y+1);
	if(x[0]==x[1]){
		printf("%d %d %d %d",x[0]+y[0]-y[1],y[0],x[0]+y[0]-y[1],y[1]);
	}else if(y[0]==y[1]){
		printf("%d %d %d %d",x[0],y[0]+x[0]-x[1],x[1],y[0]+x[0]-x[1]);
	}else if(abs(x[0]-x[1])==abs(y[0]-y[1])){
		printf("%d %d %d %d",x[0],y[1],x[1],y[0]);
	}else{
		printf("-1");
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
