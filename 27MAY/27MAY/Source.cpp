#include <iostream>
#include <exception>
#include "Compare.h"
using namespace std;

class OutOfRangeException : public exception
{
	virtual const char* what() const throw()
	{
		return "Index out of range!";
	}
};

template<class T>
class ArrayIterator
{
private:
	int Current;

public:
	ArrayIterator();
	ArrayIterator& operator++();
	ArrayIterator& operator--();
	bool operator=(ArrayIterator<T>&);
	bool operator!=(ArrayIterator<T>&);
	T* GetElement();
};

template<class T>
class Array
{
private:
	T** List;
	int Capacity;
	int Size;

public:
	Array();
	~Array();
	Array(int capacity);
	Array(const Array<T>& otherArray);

	T& operator[](int index); // throws OutOfRangeException

	const Array<T>& operator+=(const T& newElem);
	const Array<T>& Insert(int index, const T& newElem); // throws OutOfRangeException
	const Array<T>& Insert(int index, const Array<T> otherArray); // throws OutOfRangeException
	const Array<T>& Delete(int index); // throws OutOfRangeException

	bool operator=(const Array<T>& otherArray);

	void Sort(); // throws OutOfRangeException
	void Sort(int (*compare)(const T&, const T&)); // throws OutOfRangeException
	void Sort(Compare* comparator); // throws OutOfRangeException

	int BinarySearch(const T& elem); // throws OutOfRangeException
	int BinarySearch(const T& elem, int (*compare)(const T&, const T&)); // throws OutOfRangeException
	int BinarySearch(const T& elem, Compare* comparator); // throws OutOfRangeException

	int Find(const T& elem); // throws OutOfRangeException
	int Find(const T& elem, int (*compare)(const T&, const T&)); // throws OutOfRangeException
	int Find(const T& elem, Compare* comparator); // throws OutOfRangeException

	int GetSize();
	int GetCapacity();

	ArrayIterator<T> GetBeginIterator();
	ArrayIterator<T> GetEndIterator();
};

// Array class implementation...

// Operator [] - throws OutOfRangeException
template<class T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= Size)
		throw OutOfRangeException();
	return *List[index];
}

// Insert - throws OutOfRangeException
template<class T>
const Array<T>& Array<T>::Insert(int index, const T& newElem)
{
	if (index < 0 || index > Size)
		throw OutOfRangeException();

	// Insert code...

	return *this;
}

// Delete - throws OutOfRangeException
template<class T>
const Array<T>& Array<T>::Delete(int index)
{
	if (index < 0 || index >= Size)
		throw OutOfRangeException();

	// Delete code...

	return *this;
}

// Sort - throws OutOfRangeException
template<class T>
void Array<T>::Sort()
{
	if (Size <= 1)
		return;

	// Sort code...
}

// BinarySearch - throws OutOfRangeException
template<class T>
int Array<T>::BinarySearch(const T& elem)
{
	if (Size <= 0)
		throw OutOfRangeException();

	// Binary search code...

	return -1; // Return appropriate value
}

// Find - throws OutOfRangeException
template<class T>
int Array<T>::Find(const T& elem)
{
	if (Size <= 0)
		throw OutOfRangeException();

	// Find code...

	return -1; // Return appropriate value
}