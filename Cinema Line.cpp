//Problem Link: https://codeforces.com/contest/349/problem/A
//@CodeByNahid
#include<iostream>
using namespace std;
int main()
{
int n,a=0,b=0;
cin>>n;
for(int i;cin>>i;i++)
{
i==25?a++:(a--,i==50?b++:b--);
if(b<0)b++,a-=2;
if(a<0)
return cout<<"NO",0;
}
cout<<"YES";
}
