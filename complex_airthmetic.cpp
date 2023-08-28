#include<iostream>
using namespace std;
class complex{
    float areal;
    float aimg;
    float breal;
    float bimg;
    public:
    void setdata(float x, float y, float z, float w);
    void display();
    void menu();
    void add(float, float, float, float);
    void sub(float, float, float, float);
    void mul(float, float, float, float);
    void div(float, float, float, float);
};
    void complex:: setdata(float x, float y, float z, float w){
        areal = x;
        aimg = y;
        breal =z;
        bimg = w;
    }
    void complex::display(void){
        cout<<"the first complex number is "<<areal<<" + "<<aimg<<"i"<<endl;
        cout<<"the second complex number is "<<breal<<" + "<<bimg<<"i"<<endl;

    }
    void complex::menu(void){
        cout<<"menu\n";
        cout<<"enter any expression \n";
        cout<<" i -> addition\n";
        cout<<" j -> subtraction\n";
        cout<<" k -> multiplication\n";
        cout<<" l -> division\n";
        cout<<" q -> quit\n";
        cout<<"option,please?";
    }
    void complex::add(float areal,float aimg, float breal, float bimg){
        float creal, cimg;
        creal=areal+breal;
        cimg=aimg+bimg;
        cout<<"the addition of two complex numbers is: "<<creal<<"+"<<cimg<<endl;
    }
    void complex::sub(float areal,float aimg, float breal, float bimg){
        float creal, cimg;
        creal=areal-breal;
        cimg=aimg-bimg;
        cout<<"the subtraction of two complex numbers is: "<<creal<<"-"<<cimg<<endl;
    }
    void complex::mul(float areal,float aimg, float breal, float bimg){
        float creal,cimg;
        creal=(areal*breal)-(aimg*bimg);
        cimg=(areal*breal)+(aimg*bimg);
        cout<<"the multiplication of two complex numbers is "<<creal<<"i"<<cimg<<endl;
    }
    void complex::div(float areal,float aimg, float breal, float bimg){
        float creal,cimg;
        float tmp;
        tmp=(breal*breal)+(bimg*bimg);
        creal=((areal*breal)+(aimg*bimg))/tmp;
        cimg=((areal*breal)-(aimg*bimg))/tmp;
        cout<<"the division of two complex numbers is "<<creal<<"i"<<cimg<<endl;
    }
    int main(){
        complex comp;
        float x,y,z,w;
        char ch;
        cout<<"enter a first complex number\n";
        cin>>x>>y;
        
        cout<<"enter a second complex number\n";
        cin>>z>>w;
        comp.setdata(x,y,z,w);
        comp.display();
        comp.menu();
    
        while((ch=getchar())!='q')
        {
            switch(ch){
                case 'i':
                comp.add(x,y,z,w);
                break;
                case 'j':
                comp.sub(x,y,z,w);
                break;
                case 'k':
                comp.mul(x,y,z,w);
                break;
                case 'l':
                comp.div(x,y,z,w);
                break;
            }
        }
return 0;

    }