#include<iostream>
using namespace std;
 class complex{
    int x,y;
    public:
complex(int a, int b){
    x=a;
    y=b;
}
complex(int a){
    x=a;
   y=0;
}
void display(){
    cout<<"the value is :"<<x<<"+"<<y<<"i"<<endl;
}
 };
 int main()
 {
    complex q(2,3);
    q.display();
    complex p(3);
    p.display();
 }
