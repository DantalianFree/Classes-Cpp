#include <iostream>
#include <string.h>

class firstClass {
    public:
        void firstFunc() {
            std::cout << "This is the first class!" << std::endl;
        }
};

class secondClass {
    public:
        void secondFunc() {
            std::cout << "This is the second class!" << std::endl;
        }
};

class childClass: public firstClass, public secondClass { 
};

int main() {
    childClass myObj;
    myObj.firstFunc();
    myObj.secondFunc();
    return 0;
}