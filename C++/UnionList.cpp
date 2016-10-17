/**
 * Created on: 2016Äê10ÔÂ10ÈÕ 20:42:56
 * Author: Guest
 * Copyright (c) 2016, tool.usta.wiki , All Rights Reserved.
 */
#include<iostream>
#include<algorithm>
using namespace std;
const int SIZE=5;
int A[SIZE+1]={1,3,5,7,8},B[SIZE+1]={2,4,6,9,10};
int C[SIZE*2+1];

void UnionList(int A[],int B[],int C[]){
    int i=0,j=0,k=0;
    while(i<SIZE&&j<SIZE){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }else{
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<SIZE){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<SIZE){
        C[k]=B[j];
        j++;
        k++;
    }
}

int main(){
    UnionList(A,B,C);
    for (int i = 0; i < SIZE*2; i++) {
        std::cout << C[i] << std::endl;
    }
    return 0;
}
