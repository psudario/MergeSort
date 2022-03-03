#include <iostream>
#include "MergeSort.h"

int main(){
    int n, k;
    std::cin >> n >> k;
    int* arr = new int[n];
    populate_array(arr, n);
    std::cout << "Initial Array: " << std::endl;
    std::cout << "______________" << std::endl;
    output_array(arr, n);

    MergeSort(arr, n);

    std::cout << std::endl << std::endl << "Final Array: " << std::endl;
    std::cout << "______________" << std::endl;
    output_array(arr, n);
    return 0;
}