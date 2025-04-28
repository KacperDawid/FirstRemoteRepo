#include <iostream>
#include <string>

int main() {
    
    /*
    std::string str1 {"Hello world"};
    std::cout << "str1.size() = " << str1.size() << std::endl; 

    for (size_t i{};i<str1.size();i++) {
        std::cout << str1[i] << " ";
    }
    */

    // ========================================================================================================

    /*
    std::string str1 {"Hello world"};
    std::cout << "str1.size() = " << str1.size() << std::endl; 

    for (size_t i{};i<str1.size();i++) {
        std::cout << str1.at(i) << " ";
    }
    */

    // ========================================================================================================

    /*
    std::string str1 {"Hello world"};
    std::cout << "str1.size() = " << str1.size() << std::endl; 

    for (char t : str1) {
        std::cout << t << " ";
    }
    */

    // Getting Front and Back ========================================================================================================

    /*
    std::string str1 {"Hello world"};
    char& FrontCharacter = str1.front();
    char& BackCharacter = str1.back();

    std::cout << str1 << std::endl;
    std::cout << "Front character: "<< FrontCharacter << std::endl;
    std::cout << "Back character: "<< BackCharacter << std::endl;

    FrontCharacter = 'A';
    BackCharacter = 's';

    std::cout << str1 << std::endl;
    std::cout << "Front character: "<< FrontCharacter << std::endl;
    std::cout << "Back character: "<< BackCharacter << std::endl;
    */

    // ========================================================================================================
    
    /*
    std::string str1 {"Hello world"};
    const char* newstr1 {str1.c_str()};

    std::cout << str1 << std::endl;
    std::cout << newstr1 << std::endl;
    */

    // ========================================================================================================

    std::string str1 {"Hello world"};
    char* newstr1 {str1.data()};

    newstr1[0] = 'B';
    std::cout << str1 << std::endl;
    std::cout << newstr1 << std::endl;



    return 0;
}
