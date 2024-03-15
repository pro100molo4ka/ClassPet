#include <iostream>
#include<string>
using namespace std;

class Phone {
private:
	string number;
	string model;
	int weight;
public:

	Phone(string n, string m, int w) {
		number = "";
		model = "";
		weight = 0;
	}

	Phone(string n, string m) {
		number = "";
		model = "";
	}

	Phone(){}

	void receiveCall(string name) { 
		cout << name << " is Calling!" << endl;
	};

	string getNumber() { return number; };
};

int main() {
	Phone P1;
	P1.receiveCall("Pavel");
	cout << "Number: " << P1.getNumber() << endl;

	Phone P2;
	P2.receiveCall("Andrey");
	cout << "Number: " << P2.getNumber() << endl;

	Phone P3;
	P3.receiveCall("Max");
	cout << "Number: " << P3.getNumber() << endl;

	return 0;
}