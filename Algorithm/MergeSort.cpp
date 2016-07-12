//
//  MergeSort.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/4/27.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Definition.h"

void merge(int toSort[], int low, int mid, int high);
void mergeSortStep(int toSort[], int low, int high);

void mergeSort(int toSort[], int length){
    mergeSortStep(toSort, 0, length - 1);
}

void merge(int toSort[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int *L = new int[n1 + 1];
    int *R = new int[n2 + 1];
    for (int i = 0; i < n1; i++) {
        L[i] = toSort[low + i];
    }
    L[n1] = MAXIMUM;
    for (int i = 0; i < n2; i++) {
        R[i] = toSort[mid + 1 + i];
    }
    R[n2] = MAXIMUM;
    for (int i = 0, j = 0; i + j < high - low + 1;) {
        if(L[i] < R[j]){
            toSort[low + i + j] = L[i];
            i++;
        }else{
            toSort[low + i + j] = R[j];
            j++;
        }
    }
    delete [] L;
    delete [] R;
}

void mergeSortStep(int toSort[], int low, int high){
    if(high > low){
        mergeSortStep(toSort, low, (low + high)/2);
        mergeSortStep(toSort, (low + high)/2 + 1, high);
        merge(toSort, low, (low + high)/2, high);
    }
}