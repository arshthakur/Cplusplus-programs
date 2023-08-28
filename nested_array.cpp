#include<iostream>
using namespace std;
const int MAX=100;
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
        class age_class{
            int age;
            public:
            void input_age();
            void show_age();
        };
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
void student_info::date::age_class::input_age(void){
    cout<<"enter the age: "<<age;
}
void student_info::date::age_class::show_age(void){
    cout<<"age: "<<age;
}
int main(){
    student_info obj1[MAX];
    student_info ::date obj2[MAX];
    student_info ::date::age_class obj3[MAX];
    int i,n;
    cout<<"enter the no of student:"<<endl;
    cin>>n;
    for(i=0;i<n-1;i++)
    cout<<"records:"<<i+1<<endl;
    obj1[i].setdata();
    obj2[i].getdata();
    obj3[i].input_age();
    

  cout<<"contents of students are:"<<endl;
    for(i=0;i<n-1;i++)
    obj1[i].display();
    obj2[i].show();
    obj3[i].show_age();
    
    return 0;
}