#include <string.h>
#include <iostream>

//Inside method
class inMethod {
    public:
        void insMethod() {
            std::cout << "This is an inside method." << std::endl; 
        };
    };

//Outside method
class outMethod {
    public:
        void outsMethod(); //Declare method inside
};

//Define method outside
void outMethod() {
    std::cout << "This is an outside method.";
}

int main() {
    inMethod myObj;
    myObj.insMethod();
    return 0;
}