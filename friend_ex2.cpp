#include<iostream>
using namespace std;
class y;
class x{
    int data;
    friend void add(x, y);
    public:
    void setdata(int value)
    {
        data=value;
    }
};
class y{
    int num;
    friend void add(x, y);
    public:
    void setdata(int value){
        num=value;
    }
};
void add(x o1, y o2)
{
  cout<<"the summing of x and y is "<<o1.data + o2.num<<endl;
}
int main()
{
    x a1;
    a1.setdata(4);
    y a2;
    a2.setdata(14);

    add(a1, a2);

    return 0;
}