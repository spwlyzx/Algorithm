//
//  LinerMaximumSubarray.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/7/12.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Definition.h"

MaximumSubarray LinerMaximumSubarray(int array[], int length){
    MaximumSubarray ms;
    int low = 0;
    int high = 0;
    int sum = MINIMUM;
    int temp = 0;
    int lowtemp = 0;
    for(int i=0;i<length;i++){
        temp += array[i];
        if(temp <= 0){
            temp = 0;
            lowtemp = i+1;
        }
        if(temp > sum){
            low = lowtemp;
            high = i;
            sum = temp;
        }
    }
    ms.low = low;
    ms.high = high;
    ms.sum = sum;
    return ms;
}