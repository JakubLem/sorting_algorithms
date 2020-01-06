#include"header.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void randomTAB(int *tab, int len){
    qDebug() << "random tab";
    for(int i = 0 ; i < len ; i++){
        tab[i] = rand()%20+0;
    }
}
void printTAB(int *tab, int len){
    qDebug() << "print tab";
    for(int i = 0 ; i<len ; i++){
        cout<<"tab["<<i<<"] = "<<tab[i]<<" ";
    }
}
void heapSORT(int *tab, int len){
    qDebug() << "heap sort";
}

void bubbleSORT(int *tab, int len){
    qDebug() << "bubble sort";
    bool checker;
    for(int i = 0 ; i<len-1 ; i++){
        checker = false;
        for(int j = 0 ; j<len-i-1 ; j++){
            if(tab[j]>tab[j+1]){
                swap(tab[j], tab[j+1]);
                checker=true;
            }
        }
        if(!checker){
            break;
        }
    }
}
void insertionSORT(int *tab, int len){
    qDebug() << "insertion sort";
    int k,j;
    for(int i = 1 ; i < len ; i++){
        k = tab[i];
        j=i-1;
        while(j>-1 && tab[j]>k){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1]=k;
    }
}
void quickSORT(int *tab, int len){

}
