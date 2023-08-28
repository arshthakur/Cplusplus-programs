#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,small,large;
    cout<<"enter the array: ";
    for(i=0;i<5;i++){
     cin>>arr[i];
    }
    small=arr[0];
    large=arr[0];

    for(i=0;i<5;i++){
        if(arr[i]<small)
        small=arr[i];
    }
    for(i=0;i<5;i++)
    if(large<arr[i]){
    large=arr[i];
    }
    cout<<"the smallest number is: "<<small<<endl;
    cout<<"the largest number is: "<<large;

return(0);
}