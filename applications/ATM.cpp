#include <iostream>
using namespace std;
void show_balance(int balance);
int put_money(int balance);
int get_money(int balance);
int main()
{
    int balance=1500;
    int chose=0;
    do{
    cout<<"====================\n";
    cout<<"chose the operation\n";
    cout<<"====================\n";
    cout<<"1- know your balance\n";
    cout<<"2- put money\n";
    cout<<"3- get money\n";
    cout<<"4- Exit\n";
    cin>>chose;
    switch(chose){
    case 1: show_balance(balance);
            break;
    case 2: put_money(balance);
        break;
    case 3:get_money(balance);
        break;
    case 4: cout<<"thank you";
    break;
    }
    }
    while(chose!=4);
    
    
    return 0;
}

    void show_balance (int balance)
    {
        cout<<"your balance is "<<balance<<"\n";
    }
    int put_money(int balance)
    {
        int amount;
        cout<<"enter the amount : ";
        cin>>amount;
        cout<<"your balance naw is "<<balance+amount<<"\n";
        return balance+amount;
    }
    int get_money(int balance)
    {
        int amount;
        cout<<"enter the amount : ";
        cin>>amount;
        if (amount>balance)
        cout<<"your balance is not enough \n";
            else
            {cout<<"your balance naw is "<<balance-amount<<"\n";}
        return balance-amount;
    }