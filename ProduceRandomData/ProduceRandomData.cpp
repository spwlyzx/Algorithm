//
//  ProduceRandomData.cpp
//  ProduceRandomData
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include <random>
#include <fstream>

#include "Parameters.h"

using namespace std;

int main(){
    // 配置随机生成随机数算法
    // 以当前时间为种子
    default_random_engine random((int)time(0));
    // 生成0-4294967295的无符号整数
    uniform_int_distribution<unsigned int> dis1(MINIMUM, MAXIMUM);
    
    for(int i = 0; i < 10; i++){
        ofstream file(NAMEOFDATA[i], std::ios::binary);
        
        for(int j = 0; j < SIZEOFDATA[i]; j++){
            unsigned int num = dis1(random);
            file.write((char*)&num, sizeof(unsigned int));
        }
        file.close();
        cout<<"文件"<<NAMEOFDATA[i]<<"生成完毕"<<endl;
    }
}
