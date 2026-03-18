#include<iostream>
using namespace std;

class CentralBank
{
protected:
    string name;
    string type;
    int numOfBranches;
    float interestRate;
public:
    void createBank(string nm, string ty, int numBranch)
    {
        name = nm;
        type = ty;
        numOfBranches = numBranch;
        interestRate = 0.08;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"type: "<<type<<endl;
        cout<<"numOfBranches: "<<numOfBranches<<endl;
        cout<<"interestRate: "<<interestRate<<endl;
        cout<<endl;
    }
};

class NCCBank: public CentralBank
{
public:

    void createBank(string nm, string ty, int numBranch)
    {
        name = nm;
        type = ty;
        numOfBranches = numBranch;
        interestRate = 0.12;
    }

};

class MarcentileBank: public CentralBank
{

};

int main()
{
    NCCBank b1;
    b1.createBank("NCC", "Private", 30);
    b1.display();

    MarcentileBank b2;
    b2.createBank("Marcentile", "Private", 30);
    b2.display();

}
