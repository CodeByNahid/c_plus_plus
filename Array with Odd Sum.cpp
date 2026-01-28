//Problem Link: https://codeforces.com/problemset/problem/1296/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; 
	while(t--){
	    int n;
    cin >> n;
 
    int o = 0;
    int e = 0;
 
    int number;
    for(int i=0;i<n;i++){
        cin >> number;
        if (number % 2 == 0){
            e = 1;
        }
        else{
            o = 1;
        };
    }
    if (e && o){
        cout << "YES\n";
    }
    else if(!e && n % 2 == 1){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
	}

}
