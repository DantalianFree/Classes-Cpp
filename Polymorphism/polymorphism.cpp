#include <iostream>

class mage {
    public:
        void castSpell() {
            std::cout << "Mage casts a spell! \n";
        }
};

class pyromancer: public mage {
    public:
        void castSpell() {
            std::cout << "Pyromancer casts firewave! \n";
        }
};

class necromancer: public mage {
    public:
        void castSpell() {
            std::cout << "Necromancer summons skeleton! \n";
        }
};

int main() {
    mage playerMage;
    pyromancer pyroMage;
    necromancer necroMage;

    playerMage.castSpell();
    pyroMage.castSpell();
    necroMage.castSpell();
    return 0;
}