// bank management 

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank
{

char name[100],add[100],y;
int balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank :: open_account()
{
    cout<<"enter your full name: ";
    cin.ignore();
    cin.getline(name, 100);
    cout<<"enter your address: ";
    cin.ignore();
    cin.getline(add, 100);
    cout<<"what type of account do you want to open saving (s) or current (c) ";
    cin>>y;
    cout<<"enter amount for deposite: ";
    cin>>balance;
    cout<<"your account is created \n";
}

void bank :: deposite_money()
{
    int a;
    cout<<"enter how much you want to deposite: ";
    cin>>a;
    balance+=a;
    cout<<"total amount you deposite: \t"<<balance;
}

void bank :: display_account()
{
    cout<<"your full name: "<<name<<"\n";
    cout<<"your address: "<<add<<"\n";
    cout<<"type of account that you open: "<<y<<"\n";
    cout<<"amount you deposite: "<<balance<<"\n";
}

void bank :: withdraw_money()
{
    float amount;
    cout<<"\n withdraw: ";
    cout<<"enter amount to withdraw: ";
    cin>>amount;
    balance=balance-amount;
    cout<<"total amount left is: "<<balance;
}


int main()
{
    int ch, x;
    bank obj;
    do
    {
        cout<<"1) Open account \n";
        cout<<"2) Deposit money \n";
        cout<<"3) Withdraw money \n";
        cout<<"4) Display account \n";
        cout<<"5) Exit \n";
        cout<<"select the options from abouve \n";
        cin>>ch;
        switch(ch)
        {
            case 1: "1) Open account \n";
            obj.open_account();
            break;

            case 2: "2) Deposite money \n";
            obj.deposite_money();
            break;

            case 3: "3) Withdraw money \n";
            obj.withdraw_money();
            break;

            case 4: "4) Display account \n";
            obj.display_account();
            break;
            
            case 5: "5) Exit \n";
                if(ch==5)
                {
                    exit(1);
                }
            
            default:
                cout<<"this is not exist, try again \n";
        }
        cout<<"\n do you want to select next option then press 'y' \n";
        cout<<"if you want to exit then press 'n' ";
        x=getch();
        if(x=='n' || x=='N')
        {
            exit(0);
        } 
    } while(x=='y' || x=='Y');

    getch();
    return 0;
}
