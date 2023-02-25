/*
// Task: Write a C++ Program that involves
// All the declaration styles
*/
#include <iostream>
using namespace::std;
int main(){
    int a = 5, b = 6;          // copy initialization
    int c( 7 ), d( 8 );        // direct initialization
    int e { 9 }, f { 10 };     // direct brace initialization (preferred)
    int g = { 9 }, h = { 10 }; // copy brace initialization
    int i {}, j {};            // value initialization
    cout << "Best Practice is to initialize you variables upon creation!";
}