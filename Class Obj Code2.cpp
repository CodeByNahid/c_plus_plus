#include<iostream>
using namespace std;
class Publication
{
protected:
    char  title[40];
    float price;
public:
  virtual void  setData()=0;
  virtual void  getData()=0;
};

class Book: public Publication
{
protected:
    int page_no;
public:
   void setData()
    {
        cout<<"Set Book information: \n"<<endl;
        cout<<"Input the title of the book: "<<endl;
       gets(title);
        cout<<"Page NO: "<<endl;
        cin>>page_no;
        cout<<"Publication Price: "<<endl;
        cin>>price;
    }

  void  getData()
     {
        cout<<"Book Publication information: \n"<<endl;
        cout<<"Title: ";
       puts(title);
        cout<<"Page NO: "<<page_no<<endl;
        cout<<"Publication Price: "<<price<<endl;
    }
};

class Tape: public Publication
{
protected:
    int minutes;
public:

    void    setData()
    {
        cout<<"Set Tape information: \n"<<endl;
        cout<<"Input the title of the Tape: "<<endl;
        gets(title);
        cout<<"Minutes: "<<endl;
        cin>>minutes;
        cout<<"Publication Price: "<<endl;
        cin>>price;
    }

   void getData()
     {
        cout<<"Tape Publication information: \n"<<endl;
        cout<<"Title: ";
        cout<<title<<endl;

        cout<<"Minutes: "<<minutes<<"Min"<<endl;


        cout<<"Publication Price: "<<price<<endl;
    }

};

int main()
{
    Publication *str;
    Book b1;
    str=&b1;
    str->setData();
    str->getData();

}

