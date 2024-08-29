#include <iostream>
#include <string.h>

class myClass { //Class itself
    public: //Access Specifier
        int myNum; //Attribute
        std::string myString; //Attribute
    };

int main() {
    myClass myObj; //Object of myClass

    myObj.myNum = 10; //Access attributes using object and set values
    myObj.myString = "Hello World";

    //Print attribute values
    std::cout << myObj.myNum << std::endl;
    std::cout << myObj.myString << std::endl;

    return 0;
}