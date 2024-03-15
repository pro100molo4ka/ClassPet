#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int year_model;
	string manufacturer;
	int speed;

	Car() {
		year_model = 0;
		manufacturer = "";
		speed = 0;
	}

	void accelerate() { 
		speed += 5;
		cout <<"acceleration: " << speed << endl;
	}
	void brake () {
	speed -= 5;
	cout << "brake: " << speed << endl;
	}
	int get_speed() { return speed; };
};

int main() {
	Car C1;
	C1.accelerate();
	C1.accelerate();
	C1.accelerate();
	C1.accelerate();

	C1.brake();
	C1.brake();
	C1.brake();


	return 0;
}