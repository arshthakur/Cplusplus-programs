#include<iostream>
using namespace std;
class complex{
    int a,b;
    friend class calculator;
    public:
    void setdata(int n1, int n2){
        a=n1;
        b=n2;
    }
};
class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sum1(complex, complex);
    int sum2(complex, complex);
};
int calculator::sum1(complex o1, complex o2){
    return (o1.a + o2.a);
}
int calculator::sum2(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main()
{
    complex o1,o2;
    o1.setdata(1,3);
    o2.setdata(2,6);

    calculator calc;
   int res=calc.sum1(o1, o2);
   cout<<"the real part is "<<res<<endl;

   int resc=calc.sum2(o1,o2);
   cout<<"the complex part is "<<resc<<endl;
    return 0;
}