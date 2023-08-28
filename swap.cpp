#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"enter the first value before swap: "<<endl;
    cin>>a;
    cout<<"enter the second value before swap: "<<endl;
    cin>>b;
    temp= a;
    a=b;
    b=temp;
    cout<<"the value of a after swap is "<<a<<endl;
    cout<<"the value of b after swap is "<<b<<endl;
    return 0;
}
