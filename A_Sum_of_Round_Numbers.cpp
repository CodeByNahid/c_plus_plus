//Problemlink: https://codeforces.com/contest/1352/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; while(t--){
int n;
cin>>n;int x,y=1,m;
int nt=n;
int d=0,z=0;
while(nt!=0){
    m=nt%10;
    nt/=10;
    if(m==0){
       z++;
    }
   d++;
}
cout<<d-z<<endl;

while(n!=0){
    x=n%10;
    n/=10;
    if(x!=0){
        cout<<x*(y)<<" ";
    }
    y*=10;
}
cout<<endl;}

}
