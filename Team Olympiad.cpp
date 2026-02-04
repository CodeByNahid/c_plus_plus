//Problem Link: https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int>mp;
    int one=0,two=0,three=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
  int w=min(mp[1],min(mp[2],mp[3]));
  if(w==0) cout<<0<<endl;

 
else {
    cout<<w<<endl;
    int k=0;
    while(k<w){
    for(int i=1;i<4;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==i){
            cout<<j+1<<" ";
            a[j]=0;
            break;}
        }
    }
    cout<<endl;
        k++;
    }
    
}
    return 0;
}
