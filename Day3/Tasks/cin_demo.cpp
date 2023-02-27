/*
Write a C++ program that prints out the cin output generated for the following cases
for a variable that is of int data type
Cases:
1) If a letter is provided as input
2) If floating point number as input
3) If a number prefixed with a string is given for ex:123Pass
4) The opposite case of 3 : ex-Pass123
5) If a string is passed as input
*/

#include<iostream>
#include <string>
using namespace std;
int main(){
    int x{};
    cout << "Provide an Input:";
    cin >> x;
    cout<<"Value stored in x:"<<x;
}