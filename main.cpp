#pragma execution_character_set( "utf-8" )
#include"header.h"
#include <QCoreApplication>
#include <windows.h>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleOutputCP(65001);
    SetConsoleTitleA("Algorytmy sortujace");
    srand( time( NULL ) );
    int len,option;
    bool checker;
    while(true){
        checker=true;
        system("cls");
        cout<<"Podaj rozmiar tablicy: ";
        cin>>len;
        int *tab = new int[len];
        randomTAB(tab,len);
        system("cls");
        cout<<"Algorytmy sortujące: "<<endl;
        cout<<"1 Sortowanie bąbelkowe"<<endl;
        cout<<"2 Sortowanie przez kopcowanie"<<endl;
        cout<<"3 Sortowanie przez wstawianie"<<endl;
        cout<<"4 Quick Sort"<<endl;
        cout<<"5 Zakończ program"<<endl;
        cout<<"Wybierz opcję: ";
        cin>>option;
        cout<<endl;
        printTAB(tab,len);
        cout<<endl<<endl;
        switch (option) {
        case 1: {
            cout<<"bubble sort";
            bubbleSORT(tab,len);
            break;
        }
        case 2: {
            cout<<"heap sort";
            heapSORT(tab,len);
            break;
        }
        case 3: {
           cout<<"insertion sort";
           insertionSORT(tab,len);
           break;
        }
        case 4: {
            cout<<"quick sort";
            quickSORT(tab,len);//
            break;
        }
        case 5:{
            return a.exec();
        }
        default: {
            checker = false;
            cout<<"ERROR";
            qDebug() << "Error";
            break;
        }
        }
        if(checker){
            cout<<endl<<endl;
            printTAB(tab,len);
            delete [] tab;
            cout<<endl<<endl;
        }

        system("pause");
    }
}
