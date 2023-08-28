#include<iostream>
using namespace std;
int main()
{
    int i,n, first=0,second=1,next;
    cout<<"enter the number: ";
    cin>>n;
    for(i=0;i<=n;i++){
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}