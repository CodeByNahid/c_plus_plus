//Problem Link : https://www.codechef.com/problems/ASM120
#include <bits/stdc++.h>
using namespace std;
int s(){
int x,y; cin>>x>>y; 
        return __gcd(x, y);
        
        }

int main() {
    int t; cin>>t;
    while (t--) {
       cout<< s()<<endl;
    }
    return 0;
}
    
