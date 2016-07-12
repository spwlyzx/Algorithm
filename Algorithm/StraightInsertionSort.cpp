//
//  StraightInsertionSort.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/4/27.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Definition.h"

void straightInsertionSort(int toSort[], int length){
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