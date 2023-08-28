#include<iostream>
using namespace std;
class y;
class x{
    int val1;
    friend void exchange(x &, y&);
    public:
    void setdata(int data){
        val1=data;
    }
    void display(void){
        cout<<val1;
    }
};
class y{
    int val2;
    friend void exchange(x &, y&);
    public:
    void setdata(int data){
        val2=data;
    }
    void display(void){
        cout<<val2;
    }
};
void exchange(x & c1, y & c2)
{
    int temp= c1.val1;
    c1.val1 = c2.val2;
    c2.val2=temp;
}
int main()
{
    x oc1;
    y oc2;

    oc1.setdata(45);
    oc2.setdata(50);
    exchange(oc1,oc2);
    cout<<"the value of c1 after exchange is "<<endl;
    oc1.display();
    cout<<"the value of c2 after exchange is "<<endl;
    oc2.display();
 return 0;   
}