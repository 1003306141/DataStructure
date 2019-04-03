#include <stdio.h>
#include <assert.h>

void InsertSort(int arr[], int n);
void PrintArray(int arr[], int n);
void SwapInt(int* a, int* b);

int arr[10] = { 100,90,80,70,60,50,40,30,20,10 };

int main()
{
	InsertSort(arr, 10);
	PrintArray(arr, 10);
	return 0;
}

void InsertSort(int arr[], int n)
{
	assert(arr != NULL && n > 1);
	for (int i = 1; i < n; i++)
	{
		int tmp = arr[i];
		int j = i - 1;
		while (j >= 0 && (tmp < arr[j]))
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
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