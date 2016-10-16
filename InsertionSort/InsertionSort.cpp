//
//  InsertionSort.cpp
//  InsertionSort
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Sort.h"

void insertionSort(unsigned int toSort[], int length){
    for (int i = 1; i < length; i++) {
        int temp = toSort[i];
        int j = i - 1;
        for (; j >= 0; j--) {
            if(toSort[j] > temp){
                toSort[j+1] = toSort[j];
            }else{
                break;
            }
        }
        toSort[j+1] = temp;
    }
}

int main(){
    for(int i=0;i<NUMOFDATE;i++){
        readFromFile(NAMEOFDATA[i], toSorts[i], SIZEOFDATA[i]);
        clock_t  clockBegin, clockEnd;
        clockBegin = clock();
        insertionSort( toSorts[i], SIZEOFDATA[i]);
        clockEnd = clock();
        clock_t timepass = clockEnd - clockBegin;
        double clocksPerSec = CLOCKS_PER_SEC;
        cout<<"第"<<i<<"组数据用时"<<(timepass/clocksPerSec*1000)<<"ms"<<endl;
    }
}
