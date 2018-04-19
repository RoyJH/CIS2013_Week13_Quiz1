#include <iostream>
#include <cstring>
using namespace std;

class BankAccount{
	public:
	string name;
	string AcctNum;
	string PhoneNum;
	double balance;
	double rate;
	
	
	double deposit(){
		
		return 0;
	}
	double withdraw(){
		return 0;
	}
	double getBalance(){
		return 0;
	}
};
class Savings:public BankAccount{
		int min_balance;
		int withdraw_limit;
	};
	
	
class Checking:public BankAccount{
		int overdraft_fee;
	};

class menu{
string doThis;
	action();
	
	
	void action(){
		if (doThis == "list") {
			cout <<"Create new account: new" <<endl;
			cout <<"View Account Balance: balance" <<endl;
			cout <<"Make a deposit: deposit" <<endl;
			cout <<"Make a withdraw: withdraw" <<endl;
			cout <<"Leave: leave" <<endl;
		}
		else if (doThis == "new") {
			string type;
			cout << "Should this be a checking or savings account?" << endl;
			cin >> type;
				if (type=="checking"){}
				else if (type=="savings"){}
			cout<< "What's the name on the account?" << endl;
		}
		else if (doThis == "balance") {
			//cout << "The balance for account " << ?? << " is $" << ?? << endl;
		}
		else if (doThis == "deposit") {
		
		}
		else if (doThis == "withdraw") {
		
		}
		else if (doThis == "leave") {
		
		}
		else {
		cout<< "Invalid command. Enter a valid option. Enter list to view commands" << endl;
		
		}
	}
};

int main(){
	cout << "Welcome to bank.  What would you like to do today?" << endl;
	cout <<"Create new account: new" <<endl;
	cout <<"View Account Balance: balance" <<endl;
	cout <<"Make a deposit: deposit" <<endl;
	cout <<"Make a withdraw: withdraw" <<endl;
	cout <<"Leave: leave" <<endl;
	
	menu doThis;
	
	//action();
	
	return 0;
}
