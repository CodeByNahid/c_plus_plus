#include<iostream>
using namespace std;
int main()
{
int a[]={4,6,7,8,10,11};
int l=0,r=5,mid;

int data=11;
while(l<=r)
{
    mid=(l+r)/2;

    if(data==a[mid])
    {
        printf("%d element",mid);
        return mid;
    }
    else if(data>a[mid])
    {
        l=mid+1;
    }
    else
    {
        r=mid-1;
    }
}

}
