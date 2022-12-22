#include<iostream>
using namespace std;
class bank
{
	static double interest;
	string name,number,type;
	int balance;
	public:
		bank()
		{
			name=type=number=" ";
			balance=1000;
		}
		bank(string n,string no,string t)
		{
			name=n;
			number=no;
			type=t;
			balance=1000;
		}
		~bank()
		{
			cout<<"\nObject Closed \n";
		}		
		void input()
		{
			cout<<"\nEnter Name , Acc. Number , Type "<<endl;
			cin>>name>>number>>type;
		}		
		void deposit()
		{
			int d;
			cout<<"Enter the balance : ";
			cin>>d;
			balance=balance+d;
			display();
		}		
		void display_rate()
		{   
			cout<<"Rate of Interest is "<<interest<<endl;
		}		
		void display_balance()
		{
			cout<<"Balance is :"<<balance<<endl;
		}		
	    void display()
	    {
	    	cout<<"Name is : "<<name<<endl;
	    	cout<<"Acc. Number is : "<<number<<endl;
	    	cout<<"Acc. Type is : "<<type<<endl;
	    	display_rate();
	    	display_balance();
		}
		
};

double bank::interest=2.37;

int main()
{
	cout << "MOHAMMAD SHAHID RAZA" << endl;
	cout << "A35404821013" << endl;
	cout << "Week 6 Question 3 output:"<<endl;
	bank *ob=new bank ("SHAHID","A35404821013","Withdraw");
	{
	   ob->deposit();
    }  

	bank *obj = new bank();
	{
		obj->input();
		obj->deposit();
    }
	delete (obj);
	delete (ob);
	
}
