#include<iostream>
using namespace std;
int main()
{
    /*int x=10;
    int &y= x;
    cout<<"the value of x is "<<y<<endl;
    cout<<"the value of x is "<<x;*/

int x=10;
int &y=x;
y=20;
 cout<<"the value of x is"<<y<<endl;
 y=30;
 cout<<"the value of x is"<<y<<endl;
 

    return 0;
} 