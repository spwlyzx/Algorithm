//
//  QuickSort.cpp
//  QuickSort
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Sort.h"

void quickSort(unsigned int toSort[], int left, int right){
    if(left<right){
        unsigned int pivot = toSort[right];
        int i = left - 1;
        for(int j = left; j < right ;j++){
            if(toSort[j]<pivot){
                swap(toSort[j],toSort[++i]);
            }
        }
        swap(toSort[++i],toSort[right]);
        quickSort(toSort, left, i-1);
        quickSort(toSort, i+1, right);
    }
}

void swap(unsigned int toSort[], int i, int j){
    unsigned int temp = toSort[i];
    toSort[i] = toSort[j];
    toSort[j] = temp;
}

int main(){
    for(int i=0;i<NUMOFDATE;i++){
        readFromFile(NAMEOFDATA[i], toSorts[i], SIZEOFDATA[i]);
        clock_t  clockBegin, clockEnd;
        clockBegin = clock();
        quickSort( toSorts[i], 0, SIZEOFDATA[i]);
        clockEnd = clock();
        clock_t timepass = clockEnd - clockBegin;
        double clocksPerSec = CLOCKS_PER_SEC;
        cout<<"第"<<i<<"组数据用时"<<(timepass/clocksPerSec*1000)<<"ms"<<endl;
    }
}
