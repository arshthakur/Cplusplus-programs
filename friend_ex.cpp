#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sum1(complex, complex);
    int sum2(complex, complex);
};
class complex{
    int a,b;
    friend int calculator::sum1(complex , complex );
    friend int calculator::sum2(complex , complex );
    public:
    void setdata(int n1, int n2){
        a = n1;
        b = n2;
    }
};
 int calculator:: sum1(complex o1, complex o2){
      return (o1.a + o2.a);
 }
 int calculator:: sum2(complex o1, complex o2){
      return (o1.b + o2.b);
    }
int main(){
    complex o1,o2;
    o1.setdata(1,4);
    o2.setdata(2,4);

    calculator calc;
   int res= calc.sum1(o1,o2);
    cout<<"the sum of real part is "<<res<<endl;

    int resc=calc.sum2(o1,o2);
    cout<<"the sum of complex part is "<<resc<<endl;


    return 0;
}