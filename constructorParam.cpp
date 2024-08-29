#include <iostream>
#include <string.h>

//Constructors can be defined out and inside the class just like methods if you use outside you need to use scope resolution ( conParam::conParam )
class conParam {
    public: 
        std::string name;
        int age;
        conParam(std::string x, int y) {
            name = x;
            age = y;
        }
};

int main() {
    conParam user1( "Meg Ryan", 21 );
    conParam user2( "Kathleen", 21 );

    std::cout << user1.name << " " << user1.age << "\n";
    std::cout << user2.name << " " << user2.age << "\n";
    return 0;
};