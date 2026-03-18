#include<iostream>
using namespace std;

class ReportBook
{
protected:
    string AuthName;
    string AuthNumber;
    string content;
public:
    virtual void  setAuthInfo()=0;

    void setContent(string x)
    {
        content = x;
    }

    void display()
    {
        cout<<AuthName<<"\t"<<AuthNumber<<endl;
        cout<<content<<endl;
        cout<<endl;
    }
};

class TKsReportBook: public ReportBook
{
public:
    virtual void setAuthInfo()
    {
        AuthName = "Tokey";
        AuthNumber= "01717420420";
    }

};

class JohnsReportBook: public TKsReportBook
{
public:
    void setAuthInfo()
    {
        AuthName = "John";
        AuthNumber= "01717123123";
    }
};

class ZahidsReportBook: public ReportBook
{
public:
    void setAuthInfo()
        {
            AuthName = "Zahid";
            AuthNumber= "01511111111";
        }

};

int main()
{
    TKsReportBook b1, b2;

    b1.setAuthInfo();
    b1.setContent("A Quick Big Brown Fox Jumps Over The Lazy Dog");
    b1.display();

    b2.setAuthInfo();
    b2.setContent("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    b2.display();

    JohnsReportBook b3;
    b3.setAuthInfo();
    b3.setContent("Sob English Letters");
    b3.display();

    ZahidsReportBook b4;
    b4.setAuthInfo();
    b4.setContent("zyxwvutsrqponmlkjihgfedcba");
    b4.display();



}
