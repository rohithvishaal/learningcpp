#include "calculator.h"
#include <iostream>
namespace calc{
float add(float a, float b){
    return a+b;
}

int mul(int a, int b){
    return a*b;
}

int sub(int a, int b){
    return a-b;
}

void cout(std::string op, std::string answer){
    std::string operation;
    if(op == "+")
        operation = "Addition";
    if(op == "-")
        operation = "subtraction";
    if(op == "*")
        operation = "multiplication";
    
    std::cout << operation << " of two numbers is:"<< answer << "\n";
}


}