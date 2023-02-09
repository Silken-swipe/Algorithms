#include <iostream>

int fibonacci(int value){
    if (value < 2)
        return value;
    else {
        return (fibonacci(value-1)+fibonacci(value - 2));
    }
}

int main(){    
    int fibval = fibonacci(5);
    std::cout << fibval;
}

/*

fib(5) -> fib(4) + fib(3) -> fib(3) + fib(2) + fib (2) + fib(1) -> fib(2) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) -> fib(1) + fib(0)

*/