//
// Created by Albert Bălteanu on 15-May-23.
//

#ifndef EX1_CMAKE_WITH_TESTS_SORT_H
#define EX1_CMAKE_WITH_TESTS_SORT_H

//am inversat valoarea de return care indica realizarea cu succes a sortarii
template <typename T>
int insertionSort1(T arr[], int n,bool asc)
{   if(arr==nullptr)
    return 1;
    if(asc==true) {
        int i, j;
        T key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    else
    {
        int i, j;
        T key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    return 0;
}
//am inversat semnul pentru ordinea elementelor in vectorul sortat
template <typename T>
int insertionSort2(T arr[], int n,bool asc)
{   if(arr==nullptr)
        return 0;
    if(asc==true) {
        int i, j;
        T key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    else
    {
        int i, j;
        T key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    return 1;
}
//functie care uita primul element
template <typename T>
int insertionSort3(T arr[], int n,bool asc)
{    if(arr==nullptr)
        return 0;
    if(asc==true) {
        int i, j;
        T key;
        for (i = 2; i < n-1; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    else
    {
        int i, j;
        T key;
        for (i = 2; i < n-1; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    return 1;
}
//fucntia corecta
template <typename T>
int insertionSort(T arr[], int n,bool asc)
{   if(arr==nullptr)
        return 0;
    if(asc==true) {
        int i, j;
        T key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    else
    {
        int i, j;
        T key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    return 1;
}

#endif //EX1_CMAKE_WITH_TESTS_SORT_H


