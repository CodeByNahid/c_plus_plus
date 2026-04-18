#include<iostream>
using namespace std;
class School
{
protected:

    string name;
    int id;
    int contuctNumber;

public:
    School(string name="N/A",int id=0,int contuctNumber=0)
    {
        this->name=name;
        this->id=id;
        this->contuctNumber=contuctNumber;
    }

        void printInfo()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"ID:"<<id<<endl;
            cout<<"Contact Number:"<<contuctNumber<<endl<<endl;


        }

    };

    class Student: public School
    {
        string Dept;
        string role;
        double Cgpa;

    public:
        Student(string name="N/A",int id=0,int contuctNumber=0,string Dept="N/A",double Cgpa=0 )
        {
            this->name=name;
            this->id=id;
            this->contuctNumber=contuctNumber;
            this->Dept=Dept;
            this-> Cgpa=Cgpa;
            role="Student";
        }

        void printInfo()
        {
            cout<<"Role:"<<role<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"ID:"<<id<<endl;
            cout<<"Contact Number:"<<contuctNumber<<endl;
            cout<<"Department:"<<Dept<<endl;
            cout<<"CGPA:"<<Cgpa<<endl<<endl;

        }

    };

    class Teacher: public School
    {
        string subject;
        string role;


    public:
        Teacher( string name="N/A",int id=0,int contuctNumber=0,string subject="N/A")
        {
            this->name=name;
            this->id=id;
            this->contuctNumber=contuctNumber;
            this->subject=subject;
            role="Teacher";
        }


        void printInfo()
        {
            cout<<"Role:"<<role<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"ID:"<<id<<endl;
            cout<<"Contact Number:"<<contuctNumber<<endl;
            cout<<"Subject:"<<subject<<endl<<endl;
        }

    };

    int main()
    {
        School s2;
        School s1("Nahid",221311097,1751998178);
        Student st1("Hasan",221311098,1751998508,"CSE",3.22);
        Teacher t1("Jakatu",221311100,1752198508,"CSE Theory");
        s1.printInfo();
        st1.printInfo();
        t1.printInfo();

    }

