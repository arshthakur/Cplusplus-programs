#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);
    void printvalue(void);
};
 complex::complex(void){ //default constructor 
     a=20;
     b=30;
}
void complex::printvalue(void){
    cout<<"the value is "<<a<<"+"<<b<<"i"<<endl;
}
int main()
{

complex c1,c2;
c1.printvalue();
c1.printvalue();
return 0;
}