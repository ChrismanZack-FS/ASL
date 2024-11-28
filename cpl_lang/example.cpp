#include <iostream>
#include <ctime>

int main() {
    std::cout << "Hello ASL!" << std::endl;
    std::time_t now = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&now));
    return 0;
}
