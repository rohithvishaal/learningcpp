#include "iostream"
using namespace std;
int add(int a , int b, int c, int d){
    return a+b+c+d;
}

int multiply(int a, int b, int c){
    return a*b*c;
}

int subtract(int a, int b){
    return b - a;
}

int main(){
    int a{}, b{}, c{}, d{};
    cout << "Enter 4 folowed by a space";
    cin >> a >> b >> c >> d;
    cout << subtract(multiply(a, b, c), add(a, b, c, d));
}