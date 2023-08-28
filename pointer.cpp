#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int* b=&a; 
    // adress of
    cout<<"the adress of a is: "<<&a<<endl;
    cout<<"the adress of a is: "<<b<<endl;

    // dereference operator ( value at)
    cout<<"the value at adress b is: "<<*b;
    return 0;
}