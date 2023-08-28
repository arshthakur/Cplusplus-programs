#include<iostream>
using namespace std;
class fibonacci{                                 // not working
 int first,second,next;
    public:
    fibonacci()
    {
        first=0;
        second=1;
        next=first+second;
    }
    void increment()
    {
        first=second;
        second=next;
        next=first+second; 
    }
    void display(){
        cout<<first<<endl;
    }

};

int main()
{
    fibonacci number;
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    number.display();
    number.increment();
    }
    return 0;
}
