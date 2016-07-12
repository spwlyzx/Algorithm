//
//  Definition.h
//  Algorithm
//
//  Created by 孙培文 on 16/7/12.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#ifndef Definition_h
#define Definition_h

#define MAXIMUM 2147483647;
#define MINIMUM -2147483648;

struct MaximumSubarray {
    int low;
    int high;
    int sum;
};

//MaximumSubarray
MaximumSubarray MergeMaximumSubarray(int array[], int length);
MaximumSubarray LinerMaximumSubarray(int array[], int length);

//Sort
void straightInsertionSort(int toSort[], int length);
void straightSelectSort(int toSort[], int length);
void mergeSort(int toSort[], int length);

#endif /* Definition_h */
