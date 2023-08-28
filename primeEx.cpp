#include<iostream>
using namespace std;
int main()
{
    int n, i=2,temp=0;
    cout<<"enter the value of n:";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
          temp=temp+1;
        }
        i=i+1;
    }
    if(temp==1){

    cout<<"the number is prime:";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}