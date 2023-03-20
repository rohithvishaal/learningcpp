#include <iostream>
int main(){
    short x{};
    // overflows to -32768
    x = 32768;
    std::cout << x << "\n";
    unsigned short y{};
    // overflows to 1
    y = 65537;
    std::cout << y << "\n";
}