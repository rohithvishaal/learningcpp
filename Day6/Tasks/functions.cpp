#include "iostream"
#include <string>
using namespace std;

string getFullName(string fname, string lname){

    cout << "Getting FullName\n";
    return fname+" "+lname;
}

string greet(string fname, string lname)
{
    cout << "Inside function\n";
    return "Hello" + getFullName(fname, lname);
}


int main()
{
    cout << "Before calling the function\n";
    string greeting = greet("rohith", "vishaal");
    cout << "outside the function\n";
    cout << "Output :" << greeting;
    return 0;
}