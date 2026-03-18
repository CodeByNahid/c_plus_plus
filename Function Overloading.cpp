#include<iostream>
using namespace std;

class Complex
{
public:
    double real;
    double img;

    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex(double r, double i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex add(Complex x)
    {
        Complex tempObj;
        tempObj.real = real + x.real;
        tempObj.img = img + x.img;
        return tempObj;
    }
};


int main()
{
    Complex c_num1(2,1);
    Complex c_num2(5,3);
    Complex c_num3 = c_num1.add(c_num2);

    c_num1.display();
    c_num2.display();
    c_num3.display();

    Complex c_num101(0.1,0.3);
    Complex c_num102(0.2,0.7);
    Complex c_num103 = c_num101.add(c_num102);


    c_num101.display();
    c_num102.display();
    c_num103.display();




}
