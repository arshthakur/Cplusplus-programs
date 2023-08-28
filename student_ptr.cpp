#include<iostream>
using namespace std;
class student{
    long int roll_no;
    int age;
    char sex;
    float height;
    float weight;
    public:
    void setdata(void){
        cout<<"enter your rollno :";
        cin>>roll_no;
        cout<<"enter your age : ";
        cin>>age;
        cout<<"enter your sex : ";
        cin>>sex;
        cout<<"enter your height : ";
        cin>>height;
        cout<<"enter your weight : ";
        cin>>weight;
    }
    void display(void){
        cout<<"roll no = "<<roll_no<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"sex = "<<sex<<endl;
        cout<<"height = "<<height<<endl;
        cout<<"weight = "<<weight<<endl;
    }
};
int main()
{
    student *ptr;
    cout<<"enter the details"<<endl;
    ptr->setdata();
    cout<<"\n contents of class"<<endl;
    ptr->display();
    return 0;
}