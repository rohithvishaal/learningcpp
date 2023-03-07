#include "iostream"
#include "random"
#include <time.h>

int rollDice(){
    return rand() % 6 + 1;
}

int main(){
    srand(time(0));
    int counters[6] = {0, 0, 0, 0, 0, 0};
    for(int i=0;i<100;i++){
        counters[rollDice() - 1] += 1;
    }
    for(int i = 0; i<6; i++){
        std::cout << "Number of "<< i+1 << ":"<< counters[i] << "\n";
    }
}