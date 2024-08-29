#include <iostream>
#include <string.h>

class userNation {
    public:
        void userFunction() {
            std::cout << "I live here!";
        }
};

class userCity: public userNation {
};

class userBaranggay: public userCity {
};

int main() {
    userBaranggay userLoc;
    userLoc.userFunction();
    return 0;
}