#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	int id;
	string department;
	string post;
public:
	Employee() {
		name = "";
		id = 0;
		department = "";
			post = "";
	}

	void set_name(string n) { name = n; };
	void set_id(int i) { id = i; };
	void set_department(string d) { department = d; };
	void set_post(string p) { post = p; };


	string get_name() { return name; };
	int get_id() { return id; };
	string get_department() { return department; };
	string get_post() { return post; };

};


 int main(){

	 Employee E1;
	 E1.set_name("Susan Myers");
	 E1.set_id(47899);
	 E1.set_department("Accounting");
	 E1.set_post("Vice President");

	 Employee E2;
	 E2.set_name("Mark Jones");
	 E2.set_id(39119);
	 E2.set_department("IT");
	 E2.set_post("Programmer");

	 Employee E3;
	 E3.set_name("Joy Rodgers");
	 E3.set_id(81774);
	 E3.set_department("Production");
	 E3.set_post("Engineer");


	 cout << "\nFirst Employee\n" << endl;
	 cout << "Name: " << E1.get_name() << endl;
	 cout << "ID: " << E1.get_id() << endl;
	 cout << "Department: " << E1.get_department() << endl;
	 cout << "Post: " << E1.get_post() << endl;

	 cout << "\nSecond Employee\n" << endl;
	 cout << "Name: " << E2.get_name() << endl;
	 cout << "ID: " << E2.get_id() << endl;
	 cout << "Department: " << E2.get_department() << endl;
	 cout << "Post: " << E2.get_post() << endl;

	 cout << "\nThird Employee\n" << endl;
	 cout << "Name: " << E3.get_name() << endl;
	 cout << "ID: " << E3.get_id() << endl;
	 cout << "Department: " << E3.get_department() << endl;
	 cout << "Post: " << E3.get_post() << endl;


	 return 0;
}