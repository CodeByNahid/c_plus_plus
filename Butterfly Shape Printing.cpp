#include<iostream>
using namespace std;

int main()
{
	
    for(int i=1;i<=5;i++){
    for(int k=1;k<=10;k++)
    {
    if(k<=i || i==4 || i==5)
    {
    cout << "*";
    }
    else if(k>=5-i+6)
    {
    cout << "*";
    }
    else
    {
    cout << " ";
    }
    }
    cout<< endl;
    }
    
    for(int i=3;i>=1;i--){
    for(int k=1;k<=10;k++)
    {
    if(k<=i )
    {
    cout << "*";
    }
    else if(k>=5-i+6)
    {
    cout << "*";
    }
    else
    {
    cout << " ";
    }
    }
    cout<< endl;
    }
}