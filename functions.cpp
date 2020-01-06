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

/*

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}


*/


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
