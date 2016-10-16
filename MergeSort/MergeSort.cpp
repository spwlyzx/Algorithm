//
//  MergeSort.cpp
//  MergeSort
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Sort.h"

void merge(unsigned int toSort[], int low, int mid, int high);
void mergeSortStep(unsigned int toSort[], int low, int high);

void mergeSort(unsigned int toSort[], int length){
    mergeSortStep(toSort, 0, length - 1);
}

void merge(unsigned int toSort[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    unsigned int *L = new unsigned int[n1 + 1];
    unsigned int *R = new unsigned int[n2 + 1];
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

void mergeSortStep(unsigned int toSort[], int low, int high){
    if(high > low){
        mergeSortStep(toSort, low, (low + high)/2);
        mergeSortStep(toSort, (low + high)/2 + 1, high);
        merge(toSort, low, (low + high)/2, high);
    }
}

int main(){
    for(int i=0;i<NUMOFDATE;i++){
        readFromFile(NAMEOFDATA[i], toSorts[i], SIZEOFDATA[i]);
        clock_t  clockBegin, clockEnd;
        clockBegin = clock();
        mergeSort( toSorts[i], SIZEOFDATA[i]);
        clockEnd = clock();
        clock_t timepass = clockEnd - clockBegin;
        double clocksPerSec = CLOCKS_PER_SEC;
        cout<<"第"<<i<<"组数据用时"<<(timepass/clocksPerSec*1000)<<"ms"<<endl;
    }
}
