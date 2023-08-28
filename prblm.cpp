#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='A' &&  a<='Z')
    {
        cout<<"this is a uper case letter"<<endl;
    }
    else if(a>='a' &&  a<='z')
    {
        cout<<"this is a lower case letter "<<endl;
    }
    else{
        cout<<"this is a numeric value ";
    }
    return 0;
}