#include<iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;
public:
    void setWidth(int w)
    {
        width=w;
    }
    void setHeight(int h)
    {
        height=h;
    }
};
class PrintCost
{
    int getCost(int area)
    {
        return area*70;
    }
};
class Rectangle: public Shape, public PrintCost
{
public:
    int getArea()
    {
        return (width*height);
    }

    void display()
    {
        cout<<width<<endl<<height<<endl;
    }

};
int main()
{
    Rectangle Rect;
    Rect.setWidth(2);
    Rect.setHeight(3);
    int area=Rect.getArea();

    cout<<"Total area: "<<area<<endl;
    cout<<"Total paint cost: "<<Rect.getCost(area)<<endl;
    //Rect.display();
}
