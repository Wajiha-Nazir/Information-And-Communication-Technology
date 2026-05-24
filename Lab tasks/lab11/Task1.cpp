#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class student: public person{
    public:
    int rollNo;
    void showRoll(){
        cout<<"Roll No:" << rollNo << endl;
    }
};

int main(){
    student s;
    s.name = "Wajiha Nazir";
    s.age=18;
    s.rollNo=3021;
    s.display();
    s.showRoll();
}
