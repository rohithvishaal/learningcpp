// #pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
namespace calc{
float add(float a, float b);
int mul(int a, int b);
int sub(int a, int b);
void cout(std::string op, std::string answer);
}
#endif