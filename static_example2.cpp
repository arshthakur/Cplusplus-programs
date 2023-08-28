#include<iostream>
using namespace std;
class example{
    static int x;
    public:
    void function1(void){
        x++;
    }
    void function2(void){
        cout<<"x="<<x<<endl;
    }
};
int example:: x;
int main()
{
example obj1,obj2,obj3,obj4;
cout<<"the initial value of x is "<<endl;
obj1.function2();
obj2.function2();
obj3.function2();
obj4.function2();

obj1.function1();
obj2.function1();
obj3.function1();
obj4.function1();

cout<<"value of x after calling function: "<<endl;
obj1.function2();
obj2.function2();
obj3.function2();
obj4.function2();
/*obj1.function1();
obj1.function2();

obj2.function1();
obj2.function2();

obj3.function1();
obj3.function2();*/
    return 0;
}