#pragma once
class Sort

{
    int* v;
    int count;
    // add data members

public:

    Sort(int count, int min, int max);

    Sort(int count, ...);

    Sort(int count, int* vector);

    Sort(char* c);

    Sort();
  
    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};

