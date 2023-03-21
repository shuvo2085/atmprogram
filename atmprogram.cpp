#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Bank
{
private:
		string name;
		int accnumber;
		char type[30];
		int amount=0;
		int tot=0;
		
public:
		void setvalue()
		{
			cout<<"Enter name:\n";
			cin.ignore();
			// to space in string
			getline(cin,name);
			cout<<"Enter Account number:\n";
			cin>>accnumber;
			cout<<"Enter Account type:\n";
			cin>>type;
			cout<<"Enter Balance:\n";
			cin>>tot;
			
		}
		//to show the customer details
		void showdata()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Account no:"<<accnumber<<endl;
			cout<<"Account type:"<<type<<endl;
			cout<<"Balance:"<<tot<<endl;
		}
		
	     //function to deposite the amount in Atm
		void deposit()
		{
		    cout<<"\n Enter Amount to be deposited:\n";
		    cin>>amount;
		}
		//for show the total balance
		void showbal()
		{
			tot=tot+amount;
			cout<<"\nTotal balance is: "<<tot;
		}
		//for   withdrawl
		void withdrawl()
		{
			int a,avail_balance;
			cout<<"Enter amount to withdraw:\n";
			cin>>a;
			avail_balance=tot-a;
			cout<<"Available balance is: "<<avail_balance;
	
		}
};
		
		

//Driver code
int main()
{
	//object of class
	Bank b;
	int choice;
	//infinite while loop to choice
	//options everytime
	while(1)
	{
		cout<<"\n.............Welcome";
		cout<<"\n .............to the ";
		cout<<"\n ..........Axis Bank Atm\n";
		
		cout<<"Enter your choice:\n";
		cout<<"\t1.Enter name,Account"
		    <<"number,Account type\n";
		cout<<"\t2.Balance Enquiry\n";
		cout<<"\t3.Deposite money\n";
		cout<<"\t4.Show total balance\n";
		cout<<"\t5.Withdrawl money\n";
		cout<<"\t6.Cancel\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				b.setvalue();
				break;
			case 2:
				b.showdata();
				break;
			case 3:
				b.deposit();
				break;
			case 4:
				b.showbal();
				break;
			case 5:
				b.withdrawl();
				break;
			case 6:
				exit(1);
				break;
			default:
				cout<<"\n Invalid choice\n";
				
		}
	}
}

