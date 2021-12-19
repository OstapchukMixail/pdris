#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Hi ";
    if (argc > 1) {
        std::cout << argv[1];
    }
    std::cout << "! Nice to meet you!" << std::endl;
    return 0;
}