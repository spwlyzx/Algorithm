//
//  ReadFile.cpp
//  Algorithm
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//


#include <string>
#include <fstream>

using namespace std;

void readFromFile(string name, unsigned int towrite[], int length){
    ifstream fin(name, std::ios::binary);
    unsigned int num;
    
    for(int i=0; i<length; i++){
        fin.read((char*)&num, sizeof(unsigned int));
        towrite[i] = num;
    }
    
    fin.close();
}
