#include<iostream>
using namespace std;
class shop{
    int item_id[100];
    int item_price[100];
    int counter;
    public:
    void init_counter(void){counter=0;}
    void setdata(void);
    void display_data(void);

};
void shop:: setdata(void){
    cout<<"enter id of your item no "<<counter+1<<endl;
    cin>>item_id[counter];
    cout<<"enter the item price :"<<endl;
    cin>>item_price[counter];
    counter++;
}
void shop::display_data(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item id "<<item_id[i]<<" is "<<item_price[i]<<endl;
    }
}
int main()
{
    shop cost;
    cost.init_counter();
    cost.setdata();
    cost.setdata();
    cost.setdata();
    cost.setdata();
    cost.display_data();

    return 0;
}
