#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,remainder;
    cout<<"enter the value of n: ";
    cin>>n;
    while(n!=0){
        remainder=n%10;
        reverse= reverse*10+remainder;
        n/=10;

    }
    cout<<"reverse: "<<reverse;
    return 0;
}