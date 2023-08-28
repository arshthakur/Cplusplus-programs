#include<iostream>
using namespace std;
class student_info{
    char name[20];
    long int roll_no;
    char sex;
    public:
    void setdata();
    void display();
    class date{
        int day;
        int month;
        int year;
        public:
        void getdata();
        void show();
    };

};
void student_info::setdata(){
    cout<<"enter the name of student: "<<endl;
    cin>>name;
    cout<<"enter the roll_no: "<<endl;
    cin>>roll_no;
    cout<<"enter the sex: "<<endl;
    cin>>sex;
}
void student_info::display(void){
    cout<<"student name: "<<name<<endl;
    cout<<"student roll no: "<<roll_no<<endl;
    cout<<"student sex: "<<sex<<endl;
}
void student_info::date::getdata(void){
    cout<<"enter the day: "<<endl;
    cin>>day;
    cout<<"enter the month: "<<endl;
    cin>>month;
    cout<<"enter the year: "<<endl;
    cin>>year;
}
void student_info::date::show(void){
    cout<<"date: ("<<day<<"/"<<month<<"/"<<year<<")";
}
int main(){
    student_info obj1;
    student_info ::date obj2;
    obj1.setdata();
    obj2.getdata();
    obj1.display();
    obj2.show();
    
    return 0;
}