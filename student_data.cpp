#include<iostream>
using namespace std;
const int MAX=100;
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
    student obj[MAX];
    int i,n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(i=0;i<n-1;i++){
        cout<<"records="<<i+1<<endl;
        obj[i].setdata();
    }

cout<<"contents of the class\n";
    for(i=0;i<n-1;i++){
        obj[i].display();
    }
    return 0;
}
