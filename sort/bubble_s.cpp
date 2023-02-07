#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> mas_for_bubble = { 3, 6, 8, 9, 5 ,0, 1, 2, 4};
    const int lenVec = mas_for_bubble.size();

    for (int i = 0; i < lenVec - 2; i++) {
        for (int j = 0; j < lenVec - 1; j++) { // the number of comparisons is reduced by 1
            if (mas_for_bubble[j] > mas_for_bubble[j + 1]) {
                auto t = mas_for_bubble[j];
                mas_for_bubble[j] = mas_for_bubble[j + 1];
                mas_for_bubble[j + 1] = t;
            }
        }
    }
    for(std::vector<int>::iterator it = mas_for_bubble.begin(); it != mas_for_bubble.end(); it++){
        std::cout << *it << std::endl;
    }
    return 0;
}

/*

Best - O(n)
Average - O(n^2)
Worst - O(n^2)
Space: O(1)

not recommended to use

*/