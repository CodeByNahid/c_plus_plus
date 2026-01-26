//Problem Link: https://codeforces.com/contest/43/problem/A
#include <bits/stdc++.h>
using namespace std;
string s(){
    int n; cin>>n;
    string s1,s2;
    int a=1,b=0;
    if(n==1){cin>>s1;
        return s1;
    }
    cin>>s1;
    string t;
    n--;
    while(n--){
        cin>>t;
        if(t!=s1){
            s2=t;
            b++;
        }
        else a++;
    }
    return (a>b?s1:s2);
}
int main() {
cout<<s()<<endl;

}
