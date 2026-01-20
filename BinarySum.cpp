//Problem Link: https://www.codechef.com/problems/BINARYSUM

#include <bits/stdc++.h>
using namespace std;

int main() {
int t; cin>>t;
while(t--){
    int n,m;cin>>n>>m;
  int k= ceil(double(n)/2);
  int y=n/2;
  cout<<((k==m || y==m)?"YES":"NO")<<endl;
}

}
