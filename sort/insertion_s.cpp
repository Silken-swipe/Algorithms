#include <iostream>
#include <utility>
#include <vector>

void InsS(std::vector<int> &InsArr, int N){
    for(int i = 1; i < N; i++){
        int key = i;
        while(key > 0 && InsArr[key-1] > InsArr[key]){
            int tmp = InsArr[key-1];
            InsArr[key-1] = InsArr[key];
            InsArr[key] = tmp;
            key -= 1;
        }
    }
}

int main(){

    std::vector<int> mas_for_merg = { 3, 6, 8, 9, 5 ,0, 1, 2, 4};
    int Num = mas_for_merg.size();
    InsS(mas_for_merg, Num);

    for(int i = 0; i < mas_for_merg.size(); i++){
        std::cout << mas_for_merg[i] << " ";
    }
    
    return 0;
}

/*

Best - O(n)
Average - O(n^2)
Worst - O(n^2)
Space: O(1)

*/
