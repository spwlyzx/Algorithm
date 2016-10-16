//
//  Parameters.h
//  Algorithm
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#ifndef Parameters_h
#define Parameters_h

#include <string>
#include <iostream>

//存储关于排序数据的参数

const unsigned int MAXIMUM = 4294967295;//最大值
const unsigned int MINIMUM = 0;//最小值
//const unsigned int NUMOFDATE = 9;//测试数据的组数 // 不加入10^9
const unsigned int NUMOFDATE = 10; // 加入10^9时

//每组数组的个数
const int SIZEOFDATA[10]={
    10
    ,100
    ,1000
    ,10000
    ,100000
    ,1000000
    ,10000000
    ,100000000
    ,200000000
    ,1000000000    // 加入10^9时
};

const std::string NAMEOFDATA[10]={
    "10.dat"
    ,"100.dat"
    ,"1000.dat"
    ,"10000.dat"
    ,"100000.dat"
    ,"1000000.dat"
    ,"10000000.dat"
    ,"100000000.dat"
    ,"200000000.dat"
    ,"1000000000.dat"    // 加入10^9时
};

#endif /* Parameters_h */
