
#include <iostream>
#include <vector>


void Merg(std::vector<int> &Mergarr, int left, int right){

    int arrayMin1 = 0;
    int arrayMin2 = 0;




}

int main(){

    std::vector<int> mas_for_merg = { 3, 6, 8, 9, 5 ,0, 1, 2, 4};
    //const int len_MFM = mas_for_merg.size() - 1;
    int begin = 0, end = 0;
    Merg(mas_for_merg, begin, end);

    return 0;
}


/*

Best - O(nlog(n))
Average - O(nlog(n))
Worst - O(nlog(n))
Space: O(n)

merge sort is most commonly found in sorting files
An operation that represents one set of data is called a phase.
The smallest sub-process that, when repeated, constitutes the sorting process is called a pass or step.
Problem: it requires an increase in memory by an amount equal to the size of the file being sorted

*/