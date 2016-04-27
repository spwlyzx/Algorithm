//
//  StraightSelectSort.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/4/27.
//  Copyright © 2016年 孙培文. All rights reserved.
//

void straightSelectSort(int toSort[], int length){
    for (int i = 0; i < length - 1; i++) {
        int min = i;
        for(int j = i + 1; j < length; j++){
            if(toSort[min] > toSort[j]){
                min = j;
            }
        }
        int temp = toSort[i];
        toSort[i] = toSort[min];
        toSort[min] = temp;
    }
}