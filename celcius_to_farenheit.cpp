#include<iostream>
using namespace std;
int main()
{
    float cel,ferh;
    cout<<"enter the value of farenheit: ";
    cin>>ferh;
    cel=(ferh-32)*5/9;
    cout<<"cel: "<<cel;
    return 0;
}