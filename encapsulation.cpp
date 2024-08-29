#include <iostream>

//Encapsulation using setters and getters
class user{
    private:
        int balance;

    public:
        //setter
        void setBalance( int b ) {
            balance = b;
        }
        
        //getter
        int getBalance() {
            return balance;
        }
};

int main() {
    user obj;
    obj.setBalance(100);
    std::cout << obj.getBalance();
    return 0;
}