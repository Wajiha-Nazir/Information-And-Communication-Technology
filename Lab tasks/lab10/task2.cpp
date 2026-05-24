#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;
public:
    void setTitle(string t) {
        title = t;
    }
    void setPrice(double p) {
        if (p >= 0)        
            price = p;
        else
            cout << "Invalid price!" << endl;
    }
    double getPrice() {
        return price;
    }
    string getTitle() {
        return title;
    }
};

int main() {
    Book b;
    b.setTitle("C++ Programming");
    b.setPrice(1200);
    b.setPrice(1500);   
    cout << "Book Title: " << b.getTitle() << endl;
    cout << "Updated Price: " << b.getPrice() << endl;
    return 0;
}

