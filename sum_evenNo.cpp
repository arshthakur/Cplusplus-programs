#include<iostream>
using namespace std;
int main()
{
    int n,i=2,sum=0;
    cout<<"enter the value of n:";
    cin>>n;
    while(i<=n)
    {
      if(i%2==0)
      {
        sum= sum+i;
      }
      i=i+1;
    }
    cout<<"sum ="<<sum;
    return 0;
}