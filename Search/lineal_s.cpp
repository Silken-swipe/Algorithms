#include <iostream>
#include <vector>

int SearchEl(const std::vector<int> masLinSearch, int num){
    for(int i = 0; i < masLinSearch.size(); i++){
        if (masLinSearch[i] == num) {
            std::cout << "Found!";
            return i; }
    }
    std::cout << "element is not found!";
    return -1;
} 

int main(){
    
    std::vector<int> linealSArr = { 1, 2, 5, 3, 4, 6, 8, 7, 0, 9};
    int value; 
    std::cin >> value;
    SearchEl(linealSArr, value);
    return 0;
}