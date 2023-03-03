#include<iostream>
using namespace std;

string greet(string fname, string lname){
    // this "Hello "+fname+" "+lname; is an expression statement
    return "Hello "+fname+" "+lname;
}

int main(){
    int x{5};
    // This is an useless expression statement
    x = 10;
    // greet("Rohith", "Vishaal") - this is an expression
    string greeting{greet("Rohith", "Vishaal")};
    cout << greeting;
}