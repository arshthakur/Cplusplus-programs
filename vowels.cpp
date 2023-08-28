#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter the character: ";
    cin>>c;
    if(c=='a' ||c=='e'|| c=='i'|| c=='o'|| c=='u')
    {
        cout<<"the character is vowel"<<endl;
    }
    else
    {
        cout<<"the character is consonent";
    }


    return 0;
}