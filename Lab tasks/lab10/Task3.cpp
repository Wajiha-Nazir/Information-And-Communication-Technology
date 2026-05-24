#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int age;
    string disease;
public:
    void setAge(int a) {
        if (a > 0)
            age = a;
        else
            cout << "Invalid age!" << endl;
    }
    void setDisease(string d) {
        disease = d;
    }
    int getAge() {
        return age;
    }
    string getDisease() {
        return disease;
    }
};

int main() {
    Patient p;
    p.setAge(45);
    p.setDisease("Flu");
    cout << "Patient Age: " << p.getAge() << endl;
    cout << "Patient Disease: " << p.getDisease() << endl;
    return 0;
}

