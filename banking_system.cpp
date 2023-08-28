#include<iostream>
using namespace std;
class account{
    private:
    float balance;
    float rate;
    public:
    account();
    void deposit();
    void withdraw();
    void compound();
    void getbalance();
    void menu();
};
 account::account(){
cout<<"enter the initial balance: ";
cin>>balance;
cout<<"enter the interest rate:";
cin>>rate;
}
void account::deposit(){
    float amount;
    cout<<"enter the amount :";
    cin>>amount;
    balance= balance + amount; 
    cout<<"balance:"<<balance;
}
void account::withdraw(){
    float amount;
    cout<<"how much to withdraw:";
    cin>>amount;
    if(amount<=balance){
        balance=balance-amount;
        cout<<"the amount withdrawn: "<<amount<<endl;
        cout<<"available balance: "<<balance;
    }
    else
    {
        cout<<"not enough balance in your account to withdraw";
    }
}
void account::compound(){
    float interest;
    interest=balance*rate;
    balance=balance+interest;
    cout<<"total interest= "<<interest<<endl;
    cout<<"total balance = "<<balance<<endl;
}
void account::getbalance(){
    cout<<"the total balance: "<<balance;
}
void account::menu(){
    cout<<" ------menu------";
    cout<<"select an option"<<endl;
    cout<<"x -> deposit"<<endl;
    cout<<"y -> withdraw"<<endl;
    cout<<"z -> compound"<<endl;
    cout<<"w -> getbalance"<<endl;
    cout<<"q -> quit"<<endl;
    cout<<"option please!"<<endl;
}
int main()
{
    account acct;
    char ch;
    acct.menu();
    while((ch=getchar())!='q'){
        switch(ch)
        {
            case 'x':
            acct.deposit();
            break;

            case 'y':
            acct.withdraw();
            break;
            case 'z':
            acct.compound();
            break;

            case 'w':
            acct.getbalance();
            break;

        }
    }


    return 0;
}
