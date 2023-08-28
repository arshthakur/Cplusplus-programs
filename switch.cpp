#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter the first value: ";
    cin>>a;
    cout<<"enter the second value: ";
    cin>>b;
    char op;
    cout<<"enter the operation: ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<(a+b);
        break;

        case '-':
        cout<<(a-b);
        break;

        case '*':
        cout<<(a*b);
        break;

        case '/':
        cout<<(a/b);
        break;

        case '%':
        cout<<(a%b);
        break;
    }
    return 0;
}