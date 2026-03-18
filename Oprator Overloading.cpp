#include<iostream>
using namespace std;

class Complex
{
    double real;
    double img;
public:



    void setValue(double r, double i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    void operator ++()
    {
        real = real + 10;
        img = img + 10;
    }

    Complex operator + (Complex x)
    {
        Complex tempComplexNumber;
        tempComplexNumber.real = real + x.real;
        tempComplexNumber.img = img + x.img;
        return tempComplexNumber;
    }


};




int main()
{
    Complex c1
    c1.setValue(2,1);
    c1.display();
    ++c1;
    c1.display();

    Complex c101, c102, c103;
    c101.setValue(3,5);
    c102.setValue(7,10);

    c103=c101+c102;
    c103.display();
}
