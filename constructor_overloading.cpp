#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x, int y)
    {
        a=x;
        b=y;
    }
    complex(int y)
    {
        a=0;
        b=y;
    }
    void display(void)
    {
        cout<<"the sum is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1(4,3);
    c1.display();

    complex c2(3);
    c2.display();

    complex c3;
    c3.display();
    return 0;
}