#pragma once
template<class T>
class Compare
{
public:
    virtual int CompareElements(const T& e1, const T& e2) = 0;
};

template<class T>
class Array
{
    // ...

    void Sort(); // Sort using Compare<T>
    void Sort(int (*compare)(const T&, const T&)); // Sort using function pointer
    void Sort(Compare<T>* comparator); // Sort using Compare<T> object

    int BinarySearch(const T& elem); // Binary search using Compare<T>
    int BinarySearch(const T& elem, int (*compare)(const T&, const T&)); // Binary search using function pointer
    int BinarySearch(const T& elem, Compare<T>* comparator); // Binary search using Compare<T> object

    int Find(const T& elem); // Find using Compare<T>
    int Find(const T& elem, int (*compare)(const T&, const T&)); // Find using function pointer
    int Find(const T& elem, Compare<T>* comparator); // Find using Compare<T> object

    // ...
};

// Implementations of Sort, BinarySearch, and Find functions...

template<class T>
void Array<T>::Sort()
{
    // Sort using Compare<T> object
}

template<class T>
void Array<T>::Sort(int (*compare)(const T&, const T&))
{
    // Sort using function pointer
}

template<class T>
void Array<T>::Sort(Compare<T>* comparator)
{
    // Sort using Compare<T> object
}

template<class T>
int Array<T>::BinarySearch(const T& elem)
{
    // Binary search using Compare<T> object
}

template<class T>
int Array<T>::BinarySearch(const T& elem, int (*compare)(const T&, const T&))
{
    // Binary search using function pointer
}

template<class T>
int Array<T>::BinarySearch(const T& elem, Compare<T>* comparator)
{
    // Binary search using Compare<T> object
}

template<class T>
int Array<T>::Find(const T& elem)
{
    // Find using Compare<T> object
}

template<class T>
int Array<T>::Find(const T& elem, int (*compare)(const T&, const T&))
{
    // Find using function pointer
}

template<class T>
int Array<T>::Find(const T& elem, Compare<T>* comparator)
{
    // Find using Compare<T> object
}
