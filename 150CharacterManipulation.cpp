#include <iostream>
#include <cctype>

int main() {
    
    // ALPHANUMERIC =================================================================================================

    /*
    std::cout << std::isalnum('a') << std::endl;
    std::cout << std::isalnum('*') << std::endl;
    std::cout << std::isalnum(')') << std::endl;

    char test_alnum {'e'};
    if (std::isalnum(test_alnum)) {
        std::cout << test_alnum << " is alphanumeric\n";
    } else {
        std::cout << test_alnum << " is not alphanumeric\n";
    }
    */

    // ALPHA =================================================================================================
    /*
    std::cout << std::isalpha('1') << std::endl;
    std::cout << std::isalpha('^') << std::endl;
    std::cout << std::isalpha('e') << std::endl;


    char test_alnum {'9'};
    if (std::isalpha(test_alnum)) {
        std::cout << test_alnum << " is isalpha\n";
    } else {
        std::cout << test_alnum << " is not isalpha\n";
    }
    */

    // BLANK =================================================================================================
    /*
    char text []{"to jest moj tekst do spacji"};
    size_t blank_counter {};

    for (int i{0};i<std::size(text);++i) {
        if (std::isblank(text[i])) {
            blank_counter++;
        }
    }

    std::cout << "My text: " << text << std::endl;
    std::cout << "Blank count: " << blank_counter << std::endl;
    */

    // ISLOWER / ISUPPER =================================================================================================

    
    char text []{"99Najnowy Tesks1t be42dzie SP4RawDzac ile JEst malych i Duzych LiteR"};
    size_t lower_counter {};
    size_t upper_counter {};

    std::cout << text << std::endl;

    for (int i{0};i<std::size(text);++i) {
        if (std::islower(text[i])) {
            lower_counter++;
            std::cout << text[i] << " ";
        }
        if (std::isupper(text[i])) {
            upper_counter++;
            std::cout << text[i] << " ";
        }
    }

    std::cout << "\nLower: " << lower_counter << " Upper: " << upper_counter << std::endl; 





    return 0;
}
