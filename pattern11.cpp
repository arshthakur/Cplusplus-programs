#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int i=1;
       char ch='A';
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}