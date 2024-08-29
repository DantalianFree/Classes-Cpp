#include <iostream>
#include <string.h>

//Inheritance --- Derived class and base class
//Base class
class classType {
    public:
        std::string userClass = "Mage";
};

//Derived class
class subType: public classType {
    public:
        std::string subClass = "Fire lord";
        void fireball() {
            std::cout << "You cast fireball! \n";
        }
};

int main() {
    subType player;
    player.fireball();
    std::cout << player.userClass + " " + player.subClass;
    return 0;
}