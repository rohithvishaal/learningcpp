// How ternary operator works?
#include<iostream>
using namespace std;

int main(){
    int userInput{};
    string status;
    cout << "Enter anything:";
    cin >> userInput ;
    // if (userInput == 6){
    //     status = "User has entered six";
    // }
    // else{
    //     status = "User has not entered six";
    // }
    status = userInput == 6 ? 
            "User has entered six" 
            : "User has not entered six";
    cout << status;
    int x{};
    cout << (x=5);
}