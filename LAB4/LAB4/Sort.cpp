#include "Sort.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>
Sort::Sort(int count, int* vector)
{
	this->count = count;
	this->v = new int[count];
	for (int i = 0; i < count; i++)
	{
		this->v[i] = vector[i];
	}
}
Sort::Sort(int count, int min, int max)
{
	this->count = count;
	this->v = new int[count];
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < count; i++) 
	{
		this->v[i] = min + rand() % (min - max + 1);
	}
}
Sort::Sort(int count, ...)
{
	this->count = count;
	this->v = new int[count];
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		this->v[i] = va_arg(vl, int);
	}
	va_end(vl);
}
Sort::Sort(char* c)
{
	int i = 0;
	this->count = 0;
	while (i < strlen(c))
	{
		if (c[i] == ',')
			this->count++;
		i++;
	}
	this->count++;
	this->v = new int[this->count];
	//algoritm conversie	
	i = 0;
	for (int i = 0; i < this->count; i++)
		this->v[i]=0;
	int j = 0;
	while ( j < strlen(c))
	{
		if (c[j] == ',')
			{
			 i++;
			}
			else
				{
				this->v[i] = this->v[i] * 10 + c[j] - '0'; 
				
				}
		j++;
		
	}
	printf("size:%d\n", sizeof(this->v));
	
}
Sort::Sort() : v(new int[8] {6, 132, 352, 3, 46, 34, 2563, 11})
{
	this->count = 8;
}
void Sort::BubbleSort(bool ascendent)
{
	printf("\n");

	if (ascendent == false)
	{
		for (int i = 0; i < this->count-1; i++)
			for (int j = i+1; j < this->count; j++)
				if (this->v[i] < this->v[j])
				{
					int aux = this->v[i];
					this->v[i] = this->v[j];
					this->v[j] = aux;
				}
	}
	else
	{ 
		for (int i = 0; i < this->count - 1; i++)
			for (int j = i + 1; j < this->count; j++)
				if (this->v[i] > this->v[j])
				{
					int aux = this->v[i];
					this->v[i] = this->v[j];
					this->v[j] = aux;
				}
	}

	for (int i = 0; i < this->count; i++)
		printf("%d ", this->v[i]);
}
void Sort::InsertSort(bool ascendent)
{
	int i, k, j;
	for (i = 1; i < this->count; i++)
	{
		k = this->v[i];
		j = i - 1;

		while (j >= 0 && (ascendent ? this->v[j] > k : this->v[j] < k))
		{
			this->v[j + 1] = this->v[j];
			j = j - 1;
		}
		this->v[j + 1] = k;
	}
	for (int i = 0; i < this->count; i++)
		printf("%d ", this->v[i]);
}
int partition(int arr[], int start, int end, bool ascendent)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++)
	{
		if (ascendent ? arr[i] >= pivot : arr[i] <= pivot)
			count++;
	}


	int pivotIndex = start + count;
	int aux = arr[pivotIndex];
	arr[pivotIndex] = arr[start];
	arr[start] = aux;

	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (ascendent ? arr[i] >= pivot : arr[i] <= pivot)
		{
			i++;
		}

		while (ascendent ? arr[j] < pivot : arr[j] > pivot) {
			j--;
		}

		if (ascendent ? (i > pivotIndex && j < pivotIndex) : (i < pivotIndex && j > pivotIndex))
		{
			
			aux = arr[i++];
			arr[i++]= arr[j--];
			arr[j--] = aux;
		}
	}
	return pivotIndex;
}

void quickSort(int arr[], int low, int high, bool ascendent)
{
	if (low < high) {

		int pi = partition(arr, low, high, ascendent);

		quickSort(arr, low, pi - 1, ascendent);
		quickSort(arr, pi + 1, high, ascendent);
	}
}

void Sort::QuickSort(bool ascendent)
{
	if (this->count == 0)
		return;

	quickSort(this->v, 0, this->count - 1, ascendent);
	for (int i = 0; i < this->count; i++)
		printf("%d ", this->v[i]);

}
