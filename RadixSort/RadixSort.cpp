//
//  RadixSort.cpp
//  RadixSort
//
//  Created by 孙培文 on 2016/10/15.
//  Copyright © 2016年 孙培文. All rights reserved.
//

#include "Sort.h"

const int d = 65536;

unsigned int temp0[10] = {0};
unsigned int temp1[100] = {0};
unsigned int temp2[1000] = {0};
unsigned int temp3[10000] = {0};
unsigned int temp4[100000] = {0};
unsigned int temp5[1000000] = {0};
unsigned int temp6[10000000] = {0};
unsigned int temp7[100000000] = {0};
unsigned int temp8[200000000] = {0};
//unsigned int temp9[1000000000] = {0};    // 加入10^9时

unsigned int* temps[9]={
    temp0
    ,temp1
    ,temp2
    ,temp3
    ,temp4
    ,temp5
    ,temp6
    ,temp7
    ,temp8
//    ,temp9    // 加入10^9时
};

void radixSort(unsigned int toSort[], int length){
    int ltemp = length;
    int x = -1;
    do{
        ltemp/=10;
        x++;
    }while(ltemp>2);
    if(x == 7 && ltemp == 2){
        x = 8;
    }
    int index_l[d] = {0};
    int index_r[d] = {0};
    int times = 0,i,j,total,move;
    for(i = d; i>1 ; i/=2){
        times++;
    }
    total =  32/times;
    unsigned int bits = 15;
    unsigned int temp = 0;
    for(i = 0 ; i < total ; i++){
        move = i*times;
        for(j = 0 ; j < length ; j++){
            temp = toSort[j]&bits;
            temp = temp>>move;
            index_l[temp]++;
        }
        for(int k = 0; k < d; k++){
            index_r[k] = index_l[k];
        }
        for(int k = 0; k < d; k++){
            if(k+1<d)
                index_r[k+1] = index_r[k]+index_r[k+1];
            index_l[k] = index_r[k] - index_l[k];
        }
        for(j = 0 ; j < length ; j++){
            temp = toSort[j]&bits;
            temp = temp>>move;
            temps[x][index_l[temp]] = toSort[j];
            index_l[temp]=index_l[temp]+1;
        }
        bits = bits<<4;
        for(int k = 0 ; k < d; k++){
            index_l[k]=0;
            index_r[k]=0;
        }
        for(j = 0 ; j < length ; j++){
            toSort[j]=temp3[j];
        }
    }
}

int main(){
    for(int i=0;i<NUMOFDATE;i++){
        readFromFile(NAMEOFDATA[i], toSorts[i], SIZEOFDATA[i]);
        clock_t  clockBegin, clockEnd;
        clockBegin = clock();
        radixSort( toSorts[i], SIZEOFDATA[i]);
        clockEnd = clock();
        clock_t timepass = clockEnd - clockBegin;
        double clocksPerSec = CLOCKS_PER_SEC;
        cout<<"第"<<i<<"组数据用时"<<(timepass/clocksPerSec*1000)<<"ms"<<endl;
    }
}
