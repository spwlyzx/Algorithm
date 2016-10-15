//
//  ProduceRadomData.cpp
//  Algorithm
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include <iomanip>
#include <fstream>
#include <random>
#include <string>
#include <sstream>

#include "Sort.h"

using namespace std;

int main(){
    // 配置随机生成随机数算法
    // 以当前时间为种子
    default_random_engine random((int)time(0));
    // 生成0-4294967295的无符号整数
    uniform_int_distribution<unsigned int> dis1(MINIMUM, MAXIMUM);
    
    for(int i = 10; i <= 1000000000; i = i * 10){
        stringstream ss;
        ss<<i;
        string temp = ss.str();
        temp = temp + ".txt";
        ofstream file(temp);
        
        for(int j = 0; j < i; j++){
            file << dis1(random) << endl;
        }
        file.close();
    }
    
    stringstream ss;
    ss<<200000000;
    string temp = ss.str();
    temp = temp + ".txt";
    ofstream file(temp);
    
    for(int j = 0; j < 200000000; j++){
        file << dis1(random) << endl;
    }
    file.close();

}
