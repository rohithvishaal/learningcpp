#include "iostream"
#include <string>
using namespace std;

// A void function doesn't have a return type
void printStatus(string username){
    cout << "User: " << username << " has entered the chat!\n";
    return;
}

int doubleNum(int number){
    return number*2;
}

int main(){
    string username;
    cout << "Enter your name: ";
    // getline(cin , username);
    cin >> username;
    printStatus(username);
}