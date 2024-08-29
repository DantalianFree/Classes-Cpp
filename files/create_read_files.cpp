#include <iostream>
#include <fstream>
#include <string>

int main() {
    //Create and open text file
    std::ofstream newFile("testfile.txt");

    //Write to the file
    newFile << "Testing out files with c++";

    //Close the file
    newFile.close();

    //Create text string, will be used to output the text file
    std::string newText;
    //Read from the text file
    std::ifstream readFile("testfile.txt");
    //Use while loop with getline to read the file line by line
    while( getline( readFile, newText ) ) {
        std::cout << newText;
    }

    readFile.close();
}

