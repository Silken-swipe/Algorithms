#include <iostream>

int main(){

    int fact, result = 1;
    std::cin >> fact;
    if(fact != 0) {
        for(int i = 1; i <= fact; i++){
            result *= i;
        } 
    }
    if(fact < 0) std::cout << "fact > 0!";
    else result = 0;
    std::cout << result;
}