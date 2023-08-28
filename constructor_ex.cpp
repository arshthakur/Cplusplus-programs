#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex();
    void display(void){
        cout<<"the sum is "<<a<<"+"<<b<<"i";
    }
};
complex::complex()
{
    a=8;
    b=4;
}int main()
{
    complex c;
    c.display();
    return 0;
}