#include<iostream>
using namespace std;

class Employee{
	public:
		virtual void work(){
			cout<< "Wmployee is working"<<endl;
		}
};
class Manager: public Employee{
	public:
		void work() override{
			cout<< "Manager is managing work" << endl;
		}
};
int main(){
	Manager m;
	Employee* eptr=&m;
	eptr->work();
	return 0;
}
