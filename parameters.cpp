#include <string.h>
#include <iostream>

//Outside method
class parameter {
    public:
        int param(int x, int y);
    };

//method with parameter
int param(int x, int y) { 
    int z = x + y;
    return z;
}

int main() {
    parameter myObj; //Create object of class parameter
    std::cout << param(5, 6); //Call method with argument
    return 0;
} 