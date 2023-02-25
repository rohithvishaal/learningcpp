/*
// Task: Write a C++ Program that involves all the Commenting Styles:
*/
#include <iostream>
using namespace::std;

int main(){
    // This is an single line comment
    /*
    This is an multiline comment
    and can span accross multiple lines
    */
    // The lines that are commented are ignored by the compiler
    int x = 10;
    // x = 100;
    cout << x << endl;
    // The above line prints 10 because the line x = 100; is commented
    // Hence that assignment is ignored by the compiler
}