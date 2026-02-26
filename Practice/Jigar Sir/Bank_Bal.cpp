#include <iostream.h>
#include<conio.h>

class Bank
{
	int accno;
	char cname[50];
	double balance;
	public:
		void openAccount()
		{
			cout<<"\nEnter Your Name: ";
			cin>>cname;
			cout<<"\nEnter Account No. : ";
			cin>>accno;
			cout<<"\nEnter Initial Balance: ";
			cin>>balance;
			cout>>"Welcome to the bank : cname";
		}
		void deposit(double amount)
		{
			balance=balance+amout;
		}
		void withdraw(double amount)
		{
			if (amount <= balance)
			{
				balance=balance-amount;
			}
			else
			{
				cout"\nSorry You need another "<<amount-balance;
			}
		}
		void checkbalance()
		{
			
		}
}	}
}
