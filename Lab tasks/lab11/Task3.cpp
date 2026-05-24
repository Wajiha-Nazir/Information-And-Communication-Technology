#include<iostream>
using namespace std;

class printer{
	public:
		print(int x){
			cout << "x:" << x << endl;
		}
		print(double y){
			cout << "y:" << y << endl;
		}
};

int main(){
	printer p;
	p.print(20);
	p.print(3.142);
	return 0;
}



