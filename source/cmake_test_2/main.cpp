#include <string>
#include <iostream>
#include <cmake_test_1/Utils.h>

int main()
{
    std::cout << "main()\n";
    std::cout << Concat("a", "b") << std::endl;
}