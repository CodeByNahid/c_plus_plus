#include<iostream>
using namespace std;
int main()
{
    int A[2][2]=
    {
        {1,2},{3,4}
    };
    int B[2][2]={{6,7},{8,9}};
    int c[2][2];
    int d[2][2];
/* for(int i=0; i<2; i++)
 {
     for(int j=0;j<2;j++)
     {
         cout<<A[i][j]<<"\t";
     }
     cout<<endl;
 }*/
 for(int i=0;i<2;i++)
 {
     for(int j=0;j<2;j++)
     {
c[i][j]=0;
    for(int k=0;k<2;k++)
    {
       c[i][j]+=A[i][k]*B[k][j];
    }

     }
 }
 cout<<"The Multiplication of two Matrix:"<<endl;
  for(int i=0; i<2; i++)
 {
     for(int j=0;j<2;j++)
     {
         cout<<c[i][j]<<"\t";
     }
     cout<<endl;
 }

    return 0;
}
