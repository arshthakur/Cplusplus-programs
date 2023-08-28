#include<iostream>
using namespace std;
class employee{
     int id;
     int salary;
     public:
     void setdata(void){
     salary=5000;
     cout<<"enter the id of an employee: ";
     cin>>id;
     }
     void getdata(void){
        cout<<"the id of the employee is: "<<id<<endl;

     }

};
int main()
{
    employee emp[4];
    for( int i=0;i<4;i++){
        emp[i].setdata();
        emp[i].getdata();
    }
    return 0;
}