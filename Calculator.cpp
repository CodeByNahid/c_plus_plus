#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[8],b[8],c[9];
    cout<<"Enter the 1st number: "<<endl;
    gets(a);
    cout<<"Enter the 2nd number: "<<endl;
    gets(b);
int carry=0;
   int t= strlen(a);
    for(int i=0; i<t;i++)
    {
        cout<<a[i];

    }
    int p= strlen(b);
    for(int i=0; i<t;i++)
    {
        cout<<b[i];
    }

    if(t>=p)
    {
        for(int i=t; i>=0;i--)
        {
            for(int j=p; j>=0;j--)
            {
                 int temp=a[i]+b[j]+carry;
                 if(temp>=8)
                 {
                     c[i]=temp-8;
                     carry=1;
                 }
                 else
                 {
                     c[i]=temp;
                     carry=0;
                 }
            }

        }
    }
     for(int i=0; i<t;i++)
    {
        cout<<c[i];

    }

}
