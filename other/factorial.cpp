#include <iostream>

int main(){

    int fact;
    int result = 1;
    std::cin >> fact;
    if(fact != 0) {
        for(int i = 1; i <= fact; i++){
            result *= i;
    }   }else result = 0;
    std::cout << result;
}