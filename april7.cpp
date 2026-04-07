#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    int m=0,c=0;
    int x,y;
    while(t--){
    cin >> x>>y;
    if(x==y) continue;
    if(x>y) m++;
    else c++;
    
    }
    
    if(m==c){
    cout << "Friendship is magic!^^" << endl; return 0;
    }
    cout <<(m>c?"Mishka":"Chris") << endl;
    return 0;
}
