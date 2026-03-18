#include<iostream>
using namespace std;

int factorial(int f)
{
    if(f>=1)
    {
        return f*factorial(f-1);
    }
    else if(f==0)
    {
        return 1;
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
}
int main()
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"\nEnter the value of r: ";
    cin>>r;
    cout<<"\n"<<endl;
    int up=factorial(n),down=factorial(n-r),ex=factorial(r);
    cout<<"Permutaion: "<<up/down<<endl;

    cout<<"Combination: "<<(up/(down*ex))<<endl;



}
