
//
//  MaximumSubarray.cpp
//  Algorithm
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#ifndef MaximumSubarray_h
#define MaximumSubarray_h

const unsigned int MAXIMUM = 2147483647;
const unsigned int MINIMUM = -2147483648;

struct MaximumSubarray {
    int low;
    int high;
    int sum;
};

//MaximumSubarray
MaximumSubarray MergeMaximumSubarray(int array[], int length);
MaximumSubarray LinerMaximumSubarray(int array[], int length);

#endif /* MaximumSubarray_h */

