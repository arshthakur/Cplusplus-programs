#include<iostream>
using namespace std;
int main()
{
    int exponent;
    float base, result=1;
    cout<<"enter the base and exponent : "<<endl;
    cin>>base>>exponent;
    while(exponent!=0){
        result*=base;
        --exponent;

    }
    cout<<"result: "<<result;
    return 0;
}