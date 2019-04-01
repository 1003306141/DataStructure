#include <stdio.h>
#include <assert.h>

void SelectSort(int arr[], int n);
void PrintArray(int arr[], int n);
void SwapInt(int* a, int* b);

int arr[10] = { 100,90,80,70,60,50,40,30,20,10 };

int main()
{
	SelectSort(arr, 10);
	PrintArray(arr, 10);
	return 0;
}

void SelectSort(int arr[], int n)
{
	assert(arr != NULL && n > 1);
	int min;
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min] > arr[j])
				min = j;
		}
		if (min != i)
			SwapInt(&arr[min], &arr[i]);
	}
}

void SwapInt(int* a, int* b)
{
	assert(a != NULL && b != NULL);
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void PrintArray(int arr[], int n)
{
	assert(arr != NULL && n > 1);
	for (int i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	printf("\n");
}