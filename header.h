#ifndef HEADER_H
#define HEADER_H
#include<QtDebug>
#include<QDebug>
//others
void printTAB(int *tab, int len);
void randomTAB(int *tab, int len);

//heapsort
void heapSORT(int *tab, int len);
void heap_func(int *tab, int len, int i);

//bubblesort
void bubbleSORT(int *tab, int len);

//insertionsort
void insertionSORT(int *tab, int len);

//quictsort
void quickSORT(int *tab, int len);
#endif // HEADER_H
