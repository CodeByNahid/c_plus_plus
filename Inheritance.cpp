#include<iostream>
using namespace std;
class School
{
protected:

    string name;
    int id;
    char contuctNumber;

public:
    School(string name="N/A",int id=0,char contuctNumber="N/A")
    {
        this->name=name;
        this->id=id;
        this->contuctNumber=contuctNumber;

              void printInfo()
       {
           cout<<"Name:"<<name<<endl;
           cout<<"ID:"<<id<<endl;
           cout<<"Contact Number:"<<contuctNumber<<endl;


       }

    };

    class Student: public School
    {
        string Dept;
        string role;
        double Cgpa;
    public:
        Student(string name="N/A",int id=0,char contuctNumber="N/A",string Dept="N/A",double Cgpa=0 )
        {
        this->name=name;
        this->id=id;
        this->contuctNumber=contuctNumber;
        this->Dept=Dept;
        this-> Cgpa=Cgpa;
        role="Student"
        }

         void printInfo()
       { cout<<"Role:"<<role<<endl;
           cout<<"Name:"<<name<<endl;
           cout<<"ID:"<<id<<endl;
           cout<<"Contact Number:"<<contuctNumber<<endl;
           cout<<"Department:"<<Dept<<endl;
           cout<<"CGPA:"<<Dept<<endl;

       }

    };

    class Teacher: public school
    {
        string subject;
        string role;
        public:
        Student(string name="N/A",int id=0,char contuctNumber="N/A",string subject="N/A" )
        {
        this->name=name;
        this->id=id;
        this->contuctNumber=contuctNumber;
        this->subject=subject;
        role="Teacher"
        }
       void printInfo()
       {  cout<<"Role:"<<role<<endl;
           cout<<"Name:"<<name<<endl;
           cout<<"ID:"<<id<<endl;
           cout<<"Contact Number:"<<contuctNumber<<endl;
           cout<<"Subject:"<<subject<<endl;
       }

    };

    int main()
    {
        School s1;
        School s1("Nahid",221311097,01751998178);
        Student st1("Hasan",221311098,01751998508,"CSE",3.22);
        Teacher t1("Hasan",221311100,01752198508,"CSE Theory");
        s1.printInfo();
        st1.printInfo();
        t1.printInfo();

    }

