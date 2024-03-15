#include <iostream>
#include <string>
using namespace std;

class Info {
private:
	string name;
	string adress;
	int age;
	string phone_number;


public:
	Info() {
		name = "";
		adress = "";
		age = 0;
		phone_number = "";
	}

	void set_name(string n) { name = n; };
	void set_adress(string ad) { adress = ad; };
	void set_age(int a) { age = a; };
	void set_phone_number(string num) { phone_number = num; };

	string get_name() { return name; };
	string get_adress() { return adress; };
	int get_age() { return age; };
	string get_phone_number() { return phone_number; };

};
int main() {
	Info I1;
	I1.set_name("Pavel");
	I1.set_adress("Rodionova street, 197");
	I1.set_age(18);
	I1.set_phone_number("+79280526091");

	Info I2;
	I2.set_name("Nikolay");
	I2.set_adress("Prospect Gagarina, 102");
	I2.set_age(18);
	I2.set_phone_number("+79202174914");

	Info I3;
	I3.set_name("Andrey");
	I3.set_adress("Medicinskaya street, 89");
	I3.set_age(18);
	I3.set_phone_number("+79990524914");


	cout << "\nPersonal Information of the first student\n" << endl;
	cout << "Name: " << I1.get_name() << endl;
	cout << "Adress: " << I1.get_adress() << endl;
	cout << "Age: " << I1.get_age() << endl;
	cout << "Phone number: " << I1.get_phone_number() << endl;

	cout << "\nPersonal Information of the second student\n" << endl;
	cout << "Name: " << I2.get_name() << endl;
	cout << "Adress: " << I2.get_adress() << endl;
	cout << "Age: " << I2.get_age() << endl;
	cout << "Phone number: " << I2.get_phone_number() << endl;

	cout << "\nPersonal Information of the third student\n" << endl;
	cout << "Name: " << I3.get_name() << endl;
	cout << "Adress: " << I3.get_adress() << endl;
	cout << "Age: " << I3.get_age() << endl;
	cout << "Phone number: " << I3.get_phone_number() << endl;

	return 0;
}