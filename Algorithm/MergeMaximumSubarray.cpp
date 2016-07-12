//
//  MergeMaximumSubarray.cpp
//  Algorithm
//
//  Created by 孙培文 on 16/7/12.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Definition.h"

MaximumSubarray Merge(int array[], int low, int high);
MaximumSubarray midMaximumSubarray(int array[], int low, int high);

MaximumSubarray MergeMaximumSubarray(int array[], int length){
    return Merge(array, 0, length-1);
}

MaximumSubarray Merge(int array[], int low, int high){
    if(high-low<=0){
        MaximumSubarray ms;
        ms.high = high;
        ms.low = low;
        ms.sum = array[low];
        return ms;
    }else{
        MaximumSubarray left = Merge(array, low, (low+high)/2);
        MaximumSubarray right = Merge(array, (low+high)/2+1, high);
        MaximumSubarray mid = midMaximumSubarray(array, low, high);
        if(left.sum>=right.sum && left.sum>=mid.sum){
            return left;
        }else if(right.sum>=mid.sum && right.sum>=left.sum){
            return right;
        }else{
            return mid;
        }
    }
}

MaximumSubarray midMaximumSubarray(int array[], int low, int high){
    MaximumSubarray ms;
    int mid = (low+high)/2;
    int sum = array[mid]+array[mid+1];
    int temp = sum;
    int leftlow = mid;
    int righthigh = mid+1;
    for(int i = mid-1;i >= low;i--){
        temp += array[i];
        if(temp > sum){
            leftlow = i;
            sum = temp;
        }
    }
    temp = sum;
    for(int i = mid+2;i <= high;i++){
        temp += array[i];
        if(temp > sum){
            righthigh = i;
            sum = temp;
        }
    }
    ms.high = righthigh;
    ms.low = leftlow;
    ms.sum = sum;
    return ms;
}