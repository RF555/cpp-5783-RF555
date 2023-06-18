#include <iostream>
#include "namespace.hpp"

void printx() {
	std::cout << 5 << std::endl;
}

int main() {
    std::cout << "printx():\t";
	printx();
    std::cout << "::printx():\t";
    ::printx();
    std::cout << "abc::printx():\t";
    abc::printx();
}
