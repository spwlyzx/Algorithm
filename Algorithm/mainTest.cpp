//
//  mainTest.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/4/27.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include <iostream>

void straightInsertionSort(int toSort[], int length);
void straightSelectSort(int toSort[], int length);
void mergeSort(int toSort[], int length);

int main(int argc, const char * argv[]) {
    int test[] = {2,3,1,2,4,6,2,7,2,1,4,8,5,32,15,2435,223,353,2345,3,56,234,23,3456,7,568,678,456,3,34};
    mergeSort(test, sizeof(test)/sizeof(test[0]));
    for (int i = 0; i < sizeof(test)/sizeof(test[0]); i++) {
        std::cout<<test[i]<<",";
    }
    return 0;
}