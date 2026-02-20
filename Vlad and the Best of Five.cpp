//problem link: https://codeforces.com/problemset/problem/1926/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    string s; cin>>s;
	    map<char,int>mp;
	    for(char i:s) mp[i]++;
	    cout<<(mp['A']>mp['B']?"A":"B")<<endl;
	}

}
