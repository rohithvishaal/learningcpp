#include "calculator.h"
#include <sstream>
int division(int a, int b);
int main(){
    std::stringstream ss;
    std::stringstream mm;
    float addition = calc::add(5.25, 5.25);
    std::cout << addition;
    int multiply = calc::mul(5, 5);
    ss << addition;
    mm << multiply;
    calc::cout("+", ss.str());
    calc::cout("*", mm.str());
}