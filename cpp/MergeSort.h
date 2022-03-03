#ifndef MERGESORT_H
#define MERGESORT_H

void MergeSort(int* arr, int n);
void MergeSortHelper(int* arr, int l, int r);
void Merge(int* arr, int l, int r);
void populate_array(int* arr, int n);
void output_array(int* arr, int n);

#endif