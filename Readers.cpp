#include <iostream>
#include <string>
using namespace std;


class Reader {
private:
   string firstName;
    string lastName;
    int readerTicketNumber;
    string faculty;
    string birthDate;
    string phoneNumber;

public:
    Reader(string firstName, string lastName, int readerTicketNumber, string faculty, string birthDate, string phoneNumber) : firstName(firstName), lastName(lastName), readerTicketNumber(readerTicketNumber), faculty(faculty), birthDate(birthDate), phoneNumber(phoneNumber) {}

    void takeBook() {
        cout << "Читатель " << firstName << " " << lastName << " взял книгу" << endl;
    }

    void returnBook() {
        cout << "Читатель " << firstName << " " << lastName << " вернул книгу" << endl;
    }

    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    int getReaderTicketNumber() {
        return readerTicketNumber;
    }

    string getFaculty() {
        return faculty;
    }

    string getBirthDate() {
        return birthDate;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

class Book {
private:
   string author;
    string title;
    int year;

public:
    Book(string author, string title, int year) : author(author), title(title), year(year) {}

    string getAuthor() {
        return author;
    }

    string getTitle() {
        return title;
    }

    int getYear() {
        return year;
    }
};

int main() {

    setlocale(LC_ALL, "RU"); 
    system("chcp 1251");

    Reader reader1("Иван", "Иванов", 1234, "Факультет математики", "01-01-2001", "+79123456789");
    Reader reader2("Петр", "Петров", 5678, "Факультет физики", "02-02-2002", "+79234567890");
    Book book1("Автор1", "Название1", 2022);
    Book book2("Автор2", "Название2", 2023);

    reader1.takeBook();
    reader2.takeBook();
    reader1.returnBook();
    reader2.returnBook();

    return 0;
}
