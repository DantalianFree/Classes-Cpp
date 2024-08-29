#include <iostream>
#include <string>

//Base class
class wizard {
    protected: //Works like private but can be accessed in the inherited class.
        std::string magic;
};

//Derived class
class powers: public wizard {
    public:
        int damage;

        //Function to cast spell, which assigns the name to the magic attribute.
        void castSpell( std::string spell ) {
            magic = spell;
            std::cout << "You cast ";
        }

        //Function to get the magic spell name
        std::string getMagic() {
            return magic;
        }
};

int main() {
    powers spell;
    spell.damage = 50;
    spell.castSpell("Fireball");
    std::cout << spell.getMagic() << "\nYou did " << spell.damage << " damage!";
    return 0;
}