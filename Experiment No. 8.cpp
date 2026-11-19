#include<iostream>
#include<string>
using namespace std;

class PersonalInfo
{
    public:
    string name;
    int age;

    void GetPersonalInfo()
    {
        cout<<"Enter your Name :";
        cin>>name;
        cout<<"Enter your age  :";
        cin>>age;
    }
};

class SalaryInfo
{
    public:
    double salary;
    double bonus;

    void GetSalaryInfo()
    {
        cout<<"Enter your Salary :";
        cin>>salary;
        cout<<"Enter Bonus";
        cin>>bonus;
    }
};

class Employee :public PersonalInfo ,public SalaryInfo
{
    public:
    void ShowInfo()
    {
        cout<<"Employee Name   :"<<name<<endl;
        cout<<"Employee Age    :"<<age<<endl;
        cout<<"Empolyee Salary :"<<salary<<endl;
        cout<<"Employee Bonus  :"<<bonus<<endl;
        cout<<"Employee Salary After adding bonus"<<salary+bonus<<endl;
    }
};

int main()
{
    Employee E1;
    E1.GetPersonalInfo();
    E1.GetSalaryInfo();
    E1.ShowInfo();
    return 0;
}
