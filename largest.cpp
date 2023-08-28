#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter the value of n1:"<<endl;
    cin>>n1;
    cout<<"enter the value of n2:"<<endl;
    cin>>n2;
    cout<<"enter the value of n3:"<<endl;
    cin>>n3;

    if(n1>n2 && n1>n3){
        cout<<"n1 is greater among two";
    }
    else if(n2>n1 && n2>n3){
cout<<"n2 is greater among two";
    }
    else{
        cout<<"n3 is greater among two";
    }
    return 0;
}