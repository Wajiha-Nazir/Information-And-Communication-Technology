#include<iostream>
using namespace std;

class BankAccount{
	public:
	double balance=0;
	void deposit(double amount){
		balance+=amount;
		cout << "Deposited:" << amount << endl;
	}
};
class SavingAccount: public BankAccount{
	public:
		double interest(){
			return balance*0.05;
		}
};

int main(){
	SavingAccount s;
	s.deposit(10000);
	cout << "Balance:" << s.balance << endl;
	cout << "Interest:" << s.interest() << endl;
	return 0;
}
