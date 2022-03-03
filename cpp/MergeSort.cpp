#include <iostream>
#include <math.h>
#include "MergeSort.h"

void MergeSort(int* arr, int n){
    return;
}
void MergeSortHelper(int* arr, int l, int r);
void Merge(int* arr, int l, int r);
void populate_array(int* arr, int n){
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
}
void output_array(int* arr, int n){
    std::cout << "[";
    for(int i = 0; i < n; i++){
        std::cout << arr[i];
        if(i != n-1){
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}
