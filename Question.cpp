#include<iostream>
using namespace std;
int main()
{
    int A[2][2]=
    {
        {6,7},{8,9}
    };
    for(int i=0; i<2; i++)
 {
     for(int j=0;j<2;j++)
     {
         cout<<A[i][j]<<"\t";
     }
     cout<<endl;
 }
 int Row[2],col[2];

 for(int i=0;i<2;i++)
 {
     for(int j=0;j<1;j++)
     {
       Row[i]=A[i][j]+A[i][j+1];


     }
 }
  for(int j=0;j<2;j++)
 {
     for(int i=0;i<1;i++)
     {
       col[j]=A[i][j]+A[i+1][j];


     }
 }
    cout<<"First Row Sum: "<<Row[0]<<endl;
    cout<<"Second Row Sum: "<<Row[1]<<endl;
     cout<<"First Col Sum: "<<col[0]<<endl;
    cout<<"Second Col Sum: "<<col[1]<<endl;
    return 0;
}
