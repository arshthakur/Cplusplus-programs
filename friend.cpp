#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    friend complex sumcomplex(complex o1, complex o2);
    public:
    void setdata(int n1, int n2){
        a = n1;
        b = n2;
    }
    void print(){
        cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
    }
    complex sumcomplex(complex o1, complex o2){
         complex o3;
         o3.setdata((o1.a + o2.a),(o1.b + o2.b));
         return o3;
    }
};
int main()
{
    complex c1,c2,sum;
    c1.setdata(1,6);
    c1.print();

    c2.setdata(1,2);
    c2.print();

    sum=sumcomplex(c1,c2);
    sum.print();
    return 0;
}