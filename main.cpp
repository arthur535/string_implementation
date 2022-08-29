#include <iostream>
#include "class.hpp"
#include "functions.hpp"
#include "operators.hpp"
#include "ctors.hpp"

int main() {
    ams::string str1 = "helloworld";
    std::cout << "substr -> " << str1.substr(5,3) << std::endl;
    std::cout << "find -> " << str1.find("lo");
    std::cout << "str1 = " << str1 << std::endl;
    ams::string str = (char*)"helloworld";
    std::cout << "str = " << str << "\t";
    std::cout << str.size() << " " << str.capacity() << std::endl;
    str.insert(5, "newdiscovered");
    std::cout << "str after insert = " << str << "\t";
    std::cout << str.size() << " " << str.capacity() << std::endl;
    str.erase(5,17);
    std::cout << "str after erase = " << str << "\t";;
    std::cout << str.size() << " " << str.capacity() << std::endl;
    ams::string str2 = "world";
    std::cout << "str2 = " << str2 << "\t";
    std::cout << str2.size() << " " << str2.capacity() << std::endl;
    str2.swap(str1);
    std::cout << "str2 after swap = " << str2 << "\t";
    std::cout << str2.size() << " " << str2.capacity() << std::endl;
    std::cout << str.compare(str2) << std::endl;
}

