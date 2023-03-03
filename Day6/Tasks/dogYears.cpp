#include "iostream"
using namespace std;

int getUserAge(){
    cout << "Enter your Age:";
    int userAge{};
    cin >> userAge;
    return userAge;
}

int getUserAgeInDogYears(int userAge){
    return ((userAge - 2) * 4 ) + 21;
}

int main(){
    int userAge = getUserAge();
    int constantAge = 21;
    int userAgeinDogYears = getUserAgeInDogYears(userAge);
    cout << "your Age in Dog Years: " << userAgeinDogYears;
}