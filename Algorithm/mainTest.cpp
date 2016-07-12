//
//  mainTest.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/4/27.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include <iostream>
#include "Definition.h"

MaximumSubarray MergeMaximumSubarray(int array[], int length);

void straightInsertionSort(int toSort[], int length);
void straightSelectSort(int toSort[], int length);
void mergeSort(int toSort[], int length);

int main(int argc, const char * argv[]) {
    int test[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    MaximumSubarray ms = LinerMaximumSubarray(test, sizeof(test)/sizeof(test[0]));
    std::cout<<ms.sum<<";"<<ms.low<<";"<<ms.high;
    return 0;
}