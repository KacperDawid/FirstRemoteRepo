#include <iostream>
#include <string>

int main() {

    std::string s1; 
    std::string s2 {"The sky is blue"};
    std::string s3 {s2};
    std::string s4 {"Hello there",5};
    std::string s5 (4,'e');
    std::string s6 {"Hello world gsdgd"};
    std::string s7 {s6,6,5};

    std::cout << "s1: " << s1 << std::endl; 
    std::cout << "s2: " << s2 << std::endl; 
    std::cout << "s3: " << s3 << std::endl; 
    std::cout << "s4: " << s4 << std::endl; 
    std::cout << "s5: " << s5 << std::endl; 
    std::cout << "s6: " << s6 << std::endl; 
    std::cout << "s7: " << s7 << std::endl; 


    return 0;
}
