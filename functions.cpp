#include"header.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void randomTAB(int *tab, int len){
    //qDebug() << "random tab";
    for(int i = 0 ; i < len ; i++){
        tab[i] = rand()%20+0;
    }
}

void printTAB(int *tab, int len){
    //qDebug() << "print tab";
    for(int i = 0 ; i<len ; i++){
        cout<<"tab["<<i<<"] = "<<tab[i]<<" ";
    }
}

void heap_func(int *tab, int len, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < len && tab[left] > tab[largest]){
        largest = left;
    }
    if(right < len && tab[right] > tab[largest]){
        largest = right;
    }
    if(largest != i){
        swap(tab[i],tab[largest]);
        heap_func(tab, len, largest);
    }
}
void heapSORT(int *tab, int len){
    //qDebug() << "heap sort";
    for(int i = len/2 ; i>=0 ; i--){
        heap_func(tab, len, i);
    }
    for(int i = len-1 ; i>=0 ; i--){
        swap(tab[0], tab[i]);
        heap_func(tab,i,0);
    }
}

void bubbleSORT(int *tab, int len){
    //qDebug() <<"bubble sort";
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
    //qDebug() << "insertion sort";
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
