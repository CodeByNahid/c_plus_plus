//Problem: https://codeforces.com/problemset/problem/228/A
//codebynahid
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int>s;
    int x;
    for(int i=0;i<4;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<4-s.size()<<endl;
    return 0;
}
