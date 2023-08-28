#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setdata(){
        cout<<"enter the id : "<<endl;
        cin>>id;
        cout<<"the salary of employee is "<<endl;
        cin>>salary;
    }
    void getdata(){
        cout<<"the id is: "<<id<<endl;
        cout<<"salary of employee is "<<salary<<endl;
    }
};
int main(){
    employee arr[5];
    for(int i=0;i<5;i++){
        arr[i].setdata();
        arr[i].getdata();

    }
    return 0;
}