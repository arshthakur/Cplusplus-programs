/*5 + 7 = 12
3.7 + 8.0 = 11.7
5 + 8.0 = 13.0
5 - 7 = -2
3.7 - 8.0 = -4.3
5 - 8.0 = -3.0
5 * 7 = 35
3.7 * 8.0 = 29.6
5 * 8.0 = 40.0
5 / 7 = 0
3.7 / 8.0 = 0.5
5 / 8.0 = 0.6*/

#include<iostream>
using namespace std;
int main()
{

    int a=5,b=7;
    float c=3.7, d=8.0;
    cout<<"addition of a&b: "<<a+b<<endl;
    cout<<"addition of c&d: "<<c+d<<endl;
    cout<<"addition of a&d: "<<a+d<<endl;
    cout<<"substraction of a&b: "<<a-b<<endl;
    cout<<"substraction of c&D: "<<c-d<<endl;
    cout<<"multiplication of a&d: "<<a*d<<endl;
    cout<<"miltiplication of c&d: "<<c*d<<endl;
    cout<<"division of a/d: "<<a/d<<endl;

    return 0;
}