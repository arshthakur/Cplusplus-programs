#include<iostream>
using namespace std;
class fibonacci{
    int first,second,next;
    public:
    fibonacci()
    {
     first=0;
     second=1;
     next=first+second;
    }
    fibonacci(fibonacci & ptr){
        first= ptr.first;
        second= ptr.second;
         next=ptr.next;
    }
    void display()
    {
        cout<<next<<endl;
    }
    void increment()
    {
        first = second;
        second = next;
        next = first + second;
    }
};
int main()
{
    fibonacci fibo;
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    for(i=0;i<=n;i++){
    fibo.display();
    fibo.increment();
    }
    return 0;
}