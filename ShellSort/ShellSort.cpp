//
//  ShellSort.cpp
//  ShellSort
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Sort.h"

void shellSort(unsigned int toSort[], int length){
    int increment = length/2;
    while(increment > 0){
        for (int i = increment; i < length; i++) {
            for (int j = i-increment; j >= 0; j-=increment) {
                int temp = toSort[j+increment];
                if(toSort[j] > toSort[j+increment]){
                    toSort[j+increment] = toSort[j];
                    toSort[j] = temp;
                }else{
                    break;
                }
            }
        }
        increment /= 2;
    }
}

int main(){
    for(int i=0;i<NUMOFDATE;i++){
        readFromFile(NAMEOFDATA[i], toSorts[i], SIZEOFDATA[i]);
        clock_t  clockBegin, clockEnd;
        clockBegin = clock();
        shellSort( toSorts[i], SIZEOFDATA[i]);
        clockEnd = clock();
        clock_t timepass = clockEnd - clockBegin;
        double clocksPerSec = CLOCKS_PER_SEC;
        cout<<"第"<<i<<"组数据用时"<<(timepass/clocksPerSec*1000)<<"ms"<<endl;
    }
}
