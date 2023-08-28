#include<iostream>
using namespace std;
class example{
    static int x;
    public:
    void setdata(void){
        cout<<"enter the  value : ";
        cin>>x;
        x++;
    }
    void getdata(void){
        cout<<"the value of x is "<<x<<endl;
    }
};
int example::x;
int main()
{
 example obj1, obj2, obj3;
 obj1.setdata();
 obj1.getdata();

 obj2.setdata();
 obj2.getdata();

 obj3.setdata();
 obj3.getdata();
 return 0;   
}