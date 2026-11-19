#include<iostream>
using namespace std;

class shape
{
    public:
    void base()
    {
        cout<<"This is a shape "<<endl;
    }
};

class rectangle:public shape
{
    public:
    void derived1()
    {
        cout<<"This is a rectangle "<<endl;
    }
};

class circle:public shape
{
    public:
    void derived2()
    {
        cout<<"This is a circle "<<endl;
    }
};

int main()
{
    
    rectangle r;
    circle c;

    
    r.derived1();
    r.base();
    c.derived2();
    c.base();

    return 0;
}
