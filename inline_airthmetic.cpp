#include<iostream>
using namespace std;
class airthmetic{
    int a,b;
    public:
    inline void setdata(int, int);
    inline void display();
    inline int sum();
    inline int sub();
    inline int mul();
    inline int div();
};
inline void airthmetic::setdata(int n1, int n2)
{
    a = n1;
    b = n2;
}
inline void airthmetic::display(){
    cout<<"sum : "<<sum()<<endl;
    cout<<"sub : "<<sub()<<endl;
    cout<<"mul : "<<mul()<<endl;
    cout<<"div : "<<div()<<endl;
}
inline int airthmetic::sum(){
    return (a+b);
}
inline int airthmetic::sub(){
    return (a-b);
}
inline int airthmetic::mul(){
    return (a*b);
}
inline int airthmetic::div(){
    return (a/b);
}
int main()
{
airthmetic sample;
int a,b;
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of a:"<<endl;
cin>>b;
sample.setdata(a,b);
sample.display();
sample.sum();
sample.sub();
sample.mul();
sample.div();


    return 0;
}