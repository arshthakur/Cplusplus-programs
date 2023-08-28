#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=6, b=56, c=470;
    cout<<"the value of a without set(w) is "<<a<<endl;
    cout<<"the value of b without set(w) is "<<b<<endl;
    cout<<"the value of c without set(w) is "<<c<<endl;

    cout<<"the value of a with set(w) is "<<setw(4)<<a<<endl;
    cout<<"the value of b with set(w) is "<<setw(4)<<b<<endl;
    cout<<"the value of c with set(w) is "<<setw(4)<<c<<endl;
    return 0;
}