#include<iostream>
using namespace std;
int main()
{
    int a=58;
    float b=45.5;
    long double c=45.56;
    cout<<"the value is "<<a+int(b)+int(c)<<endl;
    cout<<"the value is "<<b+c<<endl;
    cout<<"the value is "<<float(a)+int(b)<<endl;
    return 0;

}