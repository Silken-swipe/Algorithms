// O(n) = nlog2(n)

#include <iostream>
#include <algorithm>
#include <vector>

bool returnValue(std::vector<int>arr, int num);

int main(){
    std::vector<int> binS = { 2, 4, 6, 7, 8, 5, 1, 3, 9, 1 };
    int num;
    std::cin >> num;
    returnValue(binS, num);
}

bool returnValue(std::vector<int>binS, int num){ //массив с числом, которое нужно найти

    std::sort(binS.begin(), binS.end());
    int left, right, middle;
    left = 0; right = binS.size() - 1;
    while(right >= left){ 

        middle = left/2 + right/2;

        if(binS[middle] == num){
            return 1;
        }
        if(binS[middle] < num){
           left = middle - 1; 
        }
        if(binS[middle] > num){
            right = middle + 1;
        }
    }
    return 0;
}

/*

O(n) = nlog2(n)


*/