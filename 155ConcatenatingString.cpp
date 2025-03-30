#include <iostream>
#include <string>

int main() {


    /*
    std::string str1 {"Hello"};
    std::string str2 {"World"};

    std::string message {str1 + " my " + str2};

    std::cout << message << std::endl;
    */

    // =========================================================================================================================
    
    
    /*
    std::cout << "Using append:" << std::endl;

    std::string str1 {"Hello"};
    std::string str2 {" World"};
    std::string str3 = str1.append(str2);
    std::cout << str3 << std::endl;

    std::string str4 {std::string{"Hello"}.append(" World")};
    std::cout << str4 << std::endl;
    */

    // =========================================================================================================================

    /*
    std::string str1 {"Hello "};
    std::string str2 {str1.append(5,'?')};
    std::cout << str2 << std::endl;

    std::string str3 {"Hello world but something"};
    std::string str4 {"czesc"};
    std::string str5 {str4.append(str3,5,6)};
    std::cout << str5 << std::endl;
    */

    // =========================================================================================================================

    std::string str1 {"Hello "};
    int num {76};

    std::string str2 {str1 + std::to_string(num)};
    std::cout << str2 << std::endl;

    return 0;
}

