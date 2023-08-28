#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    friend complex sum(complex o1, complex o2);
    void getdata(void){
        cout<<"the complex value of a and b is "<<a<<" + "<<b<<"i"<<endl;
    }
};
  complex sum(complex o1, complex o2){
    complex o3;
    o3.setdata((o1.a + o2.a),(o1.b + o2.b));
    return o3;
  }
int main()
{
    complex c1, c2, c3;
    c1.setdata(1,2);
    c1.getdata();
    c2.setdata(2,3);
    c2.getdata();

    c3=sum(c1, c2);
        c3.getdata();
    
    return 0;
}