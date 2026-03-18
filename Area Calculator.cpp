#include<iostream>
#include<conio.h>
using namespace std;

float Shape_Area(float a)
{

    return (3.1416*a*a);
}
float Shape_Area(float x,float y)
{
    return(x*y);
}
float Shape_Area(double f)
{

    return(6*f*f);
}





int main()
{  float a,x,y;
double f;
    int n;
    cout<<"Chose your shape:"<<endl;
    cout<<"1. Circle"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Cube"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"Enter the radius of the circle: "<<endl;
    cin>>a;
        cout<<"Circle Area: "<<Shape_Area(a)<<endl;
        break;

        case 2:
       cout<<"Enter the length of the Rectangle: "<<endl;
    cin>>x;
    cout<<"Enter the width of the Rectangle: "<<endl;
    cin>>y;
        cout<<"Rectangle Area: "<<Shape_Area(x,y)<<endl;
        break;

       case 3:
      cout<<"Enter the edge of the cube: "<<endl;
    cin>>f;
        cout<<"Cube Area: "<<Shape_Area(f)<<endl;
        break;
       default:
        cout<<"Wrong Input"<<endl;
        break;

    }


getch();
}
