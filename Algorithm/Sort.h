//
//  Sort.h
//  Algorithm
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

#include "Parameters.h"
#include <time.h>

using namespace std;

unsigned int toSort0[10] = {0};
unsigned int toSort1[100] = {0};
unsigned int toSort2[1000] = {0};
unsigned int toSort3[10000] = {0};
unsigned int toSort4[100000] = {0};
unsigned int toSort5[1000000] = {0};
unsigned int toSort6[10000000] = {0};
unsigned int toSort7[100000000] = {0};
unsigned int toSort8[200000000] = {0};
unsigned int toSort9[1000000000] = {0};    // 加入10^9时

unsigned int* toSorts[10]={
    toSort0
    ,toSort1
    ,toSort2
    ,toSort3
    ,toSort4
    ,toSort5
    ,toSort6
    ,toSort7
    ,toSort8
    ,toSort9    // 加入10^9时
};

extern void readFromFile(string name, unsigned int towrite[], int length);


#endif /* Sort_h */

