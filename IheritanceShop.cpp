#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int rating;

public:
    Product() : name(""), price(0), rating(0) {}
    Product(string name, double price, int rating) : name(name), price(price), rating(rating) {}

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getRating() {
        return rating;
    }
};

class Category {
private:
   string name;
    Product products[10];
    int count;

public:
    Category(string name) : name(name), count(0) {}

    void addProduct(Product product) {
        products[count] = product;
        count++;
    }

    void displayProducts() {
        for (int i = 0; i < count; i++) {
            cout << "Название: " << products[i].getName() << ", Цена: " << products[i].getPrice() << ", Рейтинг: " << products[i].getRating() << endl;
        }
    }
};

class Basket {
private:
    Product products[10];
    int count;

public:
    Basket() : count(0) {}

    void addProduct(Product product) {
        products[count] = product;
        count++;
    }

    void displayProducts() {
        for (int i = 0; i < count; i++) {
            cout << "Название: " << products[i].getName() << ", Цена: " << products[i].getPrice() << ", Рейтинг: " << products[i].getRating() << endl;
        }
    }
};

class User {
private:
    string login;
   string password;
    Basket basket;

public:
    User(string login, string password) : login(login), password(password) {}

    void addProductToBasket(Product product) {
        basket.addProduct(product);
    }

    void displayBasketProducts() {
        basket.displayProducts();
    }
};

int main() {

    setlocale(LC_ALL, "RU");
    system("chcp 1251");

    Category category1("Электроника");
    Category category2("Книги");
    Category category3("Игрушки");

    Product product1("Телевизор", 10000, 4);
    Product product2("Книга", 500, 3);
    Product product3("Игрушка", 1000, 2);

    category1.addProduct(product1);
    category2.addProduct(product2);
    category3.addProduct(product3);

    category1.displayProducts();
    category2.displayProducts();
    category3.displayProducts();

    User user1("Иван", "12345");
    User user2("Петр", "67890");

    user1.addProductToBasket(product1);
    user1.addProductToBasket(product2);
    user2.addProductToBasket(product3);

    user1.displayBasketProducts();
    user2.displayBasketProducts();

    return 0;
}
