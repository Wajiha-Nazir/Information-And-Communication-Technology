#include<iostream>
using namespace std;

class Student{
	public:
	string name;
	int rollNo;
	void display(){
		cout<< "Name:" << name << endl;
		cout<< "Roll No:" << rollNo << endl;
	}
};

int main()
{
	Student s1, s2;
	s1.name = "Wajiha Nazir";
	s1.rollNo = 3021;
	
	s2.name = "Maha Junaid";
	s2.rollNo = 3022;
	s1.display();
	s2.display();
	return 0;
}


