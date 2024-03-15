#include <iostream>
#include <string>
using namespace std;

class Retail_item {
private:
	string id;
	string description;
	int quantity_in_stock;
	float price;
public:

	Retail_item() {
		id = "";
		description = "";
		quantity_in_stock = 0;
		price = 0.00;
	}

	void set_id(string i) { id = i; };
	void set_description(string d) { description = d; };
	void set_quantity_in_stock(int q) { quantity_in_stock = q; };
	void set_price(float p) { price = p; };


	string get_id() { return id; };
	string get_description() { return description; };
	int get_quantity_in_stock() { return quantity_in_stock; };
	float get_price() { return price; };

};


int main() {

	Retail_item I1;
	I1.set_id("item #1");
	I1.set_description("jacket");
	I1.set_quantity_in_stock(12);
	I1.set_price(59.95);

	Retail_item I2;
	I2.set_id("item #2");
	I2.set_description("designer jeans");
	I2.set_quantity_in_stock(40);
	I2.set_price(34.95);

	Retail_item I3;
	I3.set_id("item #3");
	I3.set_description("shirt");
	I3.set_quantity_in_stock(20);
	I3.set_price(24.95);


	cout << "\nID: " << I1.get_id() << endl;
	cout << "Description: " << I1.get_description() << endl;
	cout << "Quantity in stock: " << I1.get_quantity_in_stock() << endl;
	cout << "Price: " << I1.get_price() << endl;

	cout << "\nID: " << I2.get_id() << endl;
	cout << "Description: " << I2.get_description() << endl;
	cout << "Quantity in stock: " << I2.get_quantity_in_stock() << endl;
	cout << "Price: " << I2.get_price() << endl;

	cout << "\nID: " << I3.get_id() << endl;
	cout << "Description: " << I3.get_description() << endl;
	cout << "Quantity in stock: " << I3.get_quantity_in_stock() << endl;
	cout << "Price: " << I3.get_price() << endl;


	return 0;
}