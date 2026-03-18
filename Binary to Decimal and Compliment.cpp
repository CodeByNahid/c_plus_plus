#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int input,a[16],binary[16],rem,i=0,k=0;
    printf("Enter a Decimal Number: ");
    scanf("%d",&input);

    while(input)
    {
        rem = input%2;
        input = input/2;
        a[i] = rem;
        ++i;
    }

    for(int j = i-1; j>= 0; --j)
    {
        binary[k] = a[j];
        k++;
    }
    int b;




    b=k;
    if(b<=8)
    {
        int main[8];

        int temp=8-b;
        if(b<8)
        {
            for(i=0; i<temp; i++)
            {
                main[i]=0;
            }
        }
        for(i=temp; i<8; i++)
        {
            main[i]=binary[i-temp];
        }
        printf("\n\nThe binary of the number is: ");
        for(i=0; i<8; i++)
        {
            cout<<main[i];
        }
        for(i=0; i<8; i++)
        {
            if(main[i]==0)
            {
                main[i]=1;
            }
            else
            {
                main[i]=0;
            }
        }
        printf("\n\nThe 1's compliment is: ");
        for(i=0; i<8; i++)
        {
            cout<<main[i];
        }
        int carry=1;
        int two[8];
        for(i=7; i>=0; i--)
        {
            if(main[i]==1 && carry==1)
            {
                two[i]=0;
            }
            else if(main[i]==0 && carry==1)
            {
                two[i]=1;
                carry=0;
            }
            else
            {
                two[i]=main[i];
            }
        }

        printf("\n\nThe 2's compliment is: ");
        for(i=0; i<8; i++)
        {
            cout<<two[i];
        }
        printf("\n\n");

    }
    else
    {


        int main[16];

        int temp=16-b;
        if(b<16)
        {
            for(i=0; i<temp; i++)
            {
                main[i]=0;
            }
        }
        for(i=temp; i<16; i++)
        {
            main[i]=binary[i-temp];
        }
        printf("\n\nThe binary of the number is: ");
        for(i=0; i<16; i++)
        {
            cout<<main[i];
        }
        for(i=0; i<16; i++)
        {
            if(main[i]==0)
            {
                main[i]=1;
            }
            else
            {
                main[i]=0;
            }
        }
        printf("\n\nThe 1's compliment is: ");
        for(i=0; i<16; i++)
        {
            cout<<main[i];
        }
        int carry=1;
        int two[16];
        for(i=15; i>=0; i--)
        {
            if(main[i]==1 && carry==1)
            {
                two[i]=0;
            }
            else if(main[i]==0 && carry==1)
            {
                two[i]=1;
                carry=0;
            }
            else
            {
                two[i]=main[i];
            }
        }

        printf("\n\nThe 2's compliment is: ");
        for(i=0; i<16; i++)
        {
            cout<<two[i];
        }
        printf("\n\n");

    }
    return 0;
}

