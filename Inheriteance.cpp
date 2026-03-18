#include<iostream>
using namespace std;

class Employee{
protected:
    string name;
    int id;
    int salary;
    string role;
public:

    Employee(string name="N/A", int id=0, int salary=0){
        this->name = name;
        this->id = id;
        this->salary = salary;

    }

    void printInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"salary: "<<salary<<endl<<endl;
    }

};

class Manager: public Employee
{
    int projectBonus;


public:
    Manager(string name="N/A", int id=0, int salary=0, int projectBonus=5000)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
        this->projectBonus = projectBonus;

        role = "Manager";
    }


    void printInfo()
    {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"role: "<<role<<endl;
        cout<<"projectBonus: "<<projectBonus<<endl<<endl;
    }


};

class Executive: public Employee
{
    int overtime;


public:
    Executive(string name="N/A", int id=0, int salary=0, int overtime=100)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
        this->overtime = overtime;

        role = "Executive";
    }

    void printInfo()
    {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"role: "<<role<<endl;
        cout<<"overtime: "<<overtime<<endl<<endl;
    }


};

int main()
{
    Employee e1;
    Employee e2("John Doe", 1002, 16000);
    Employee e3("Showvik", 1003);

    e2.printInfo();

    Manager m1("Jane Doe", 1007, 50000, 10000);
    m1.printInfo();

    Executive ex1("John Abarahm", 2001, 16000, 500);
    ex1.printInfo();



}
