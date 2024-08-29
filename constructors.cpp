#include <iostream>

//Constructor should be the same name with class.
class construct {
    public:
        construct() { //Constructor is a special method that is automatically called if an object of a class is made.
            std::cout << "This is a constructor" << std::endl;
        }
};

int main() {
    construct obj;
}