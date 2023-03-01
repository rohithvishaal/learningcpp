#include<iostream>
using namespace std;

int main()
{
    /*
    * Declaring an uninitialized variable is not preferred.
    * As the value that's inside this variable is a garbage value
    * A garbage value is nothing but value that is present in that
    * particular RAM location.
    * That value is not ideal to use in our programs as it may result in 
    * undefined behaviour.
    */
    int x;
    cout << x;

    // It is recommended to initialize an variable
    int y{};
    cout << y;
}



