#include<bits/stdc++.h>
using namespace std;

void showMenu()
{
    cout<<endl<<"**********MENU**********"<<endl;
    cout<<"1.Check balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"********************"<<endl;

}


int main()
{
    int option;
    double balance = 0;

    do
    {

    showMenu();

    cout<<"Option"<<endl;
    cin>>option;

       system("cls");

    switch(option)
    {
    case 1:
        cout<<"Balance is "<<balance<<"$"<<endl;

        break;

    case 2:
        cout<<"Deposit amount"<<endl;
        double deposit;
        cin>>deposit;
        balance+=deposit;
        break;

    case 3:
        cout<<"Withdraw amount"<<endl;
        double withdraw;
        cin>>withdraw;

        if(withdraw<=balance)
        {
            balance-=withdraw;
        }
        else
        {
            cout<<"Not enough money"<<endl;
        }
        break;
    }
    }
    while(option!=4);

}
