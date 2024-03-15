#include <iostream>
using namespace std;

class Sports {
public:
    virtual void play() = 0;
};

class Football : public Sports {
public:
    void play() override {
        cout << "Playing football" << endl;
    }
};

class Basketball : public Sports {
public:
    void play() override {
        cout << "Playing basketball" << endl;
    }
};

class Rugby : public Sports {
public:
    void play() override {
        cout << "Playing rugby" << endl;
    }
};

int main() {
    Sports* sports[] = { new Football, new Basketball, new Rugby };
    for (Sports* sport : sports) {
        sport->play();
        delete sport;
    }
    return 0;
}
