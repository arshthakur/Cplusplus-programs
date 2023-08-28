#include<iostream>
#include<cmath>
using namespace std;
class points{
    int x1,x2,y1,y2,d;
    //friend void points::distance();
  //  friend void display(void);
    public:
    points(int, int, int, int);
    void display(void){
        cout<<"distance: "<<d;
    }
void setdata();
void distance();

};
points::points(int a, int b, int c, int e)
{
    x1=a;
    x2=b;
    y1=c;
    y2=e;
}
void points::setdata(void)
{
    cout<<"enter the value of x1: "<<endl;
    cin>>x1;
    cout<<"enter the value of x2: "<<endl;
    cin>>x2;
    cout<<"enter the value of y1: "<<endl;
    cin>>y1;
    cout<<"enter the value of y2: "<<endl;
    cin>>y2;
}
   void points:: distance(){
   int d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   }
   int main()
   {
    points p;
    p.setdata();
    p.distance();
    p.display();
    return 0;
   }