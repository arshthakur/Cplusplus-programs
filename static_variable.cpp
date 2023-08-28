#include<iostream>
using namespace std;
class variable{
int id;
static int count;
public:
void setdata(void){
    cout<<"enter the item id:";
    cin>>id;
    count++;
}
void getdata(void){
    cout<<"the id of the item is "<<id<<" and the number of the item is "<<count<<endl;
}
};
int variable::count;
int main()
{
    variable harsh, suman, madhav;
    harsh.setdata();
    harsh.getdata();

    suman.setdata();
    suman.getdata();

    madhav.setdata();
    madhav.getdata();
    return 0;
}