#include "iostream"
using namespace std;

int main(){

    cout << "Hello, this is Rohith Vishaal and I am writing this"
            "long line and I making it to read easier by breaking"
            "it into smaller lines and enhancing readability";
    
    // Using descriptive and short variable names for better readability
    // is always recommended
    int userAge{};
    cin >> userAge;
    int userAgeInDogYears{};
    userAgeInDogYears = ((userAge - 2) * 4) + 22;

}