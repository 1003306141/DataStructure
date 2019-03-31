#include <stdio.h>
#include <assert.h>

void BubbleSort(int arr[], int n);
void BubbleSort2(int arr[], int n);
void PrintArray(int arr[], int n);
void SwapInt(int* a, int* b);

int arr[10] = { 100,90,80,70,60,50,40,30,20,10 };
int brr[10] = { 10,20,30,40,50,60,70,80,90,100 };
int main()
{
	BubbleSort(arr, 10);
	PrintArray(arr, 10);
	BubbleSort2(brr, 10);
	PrintArray(brr, 10);
	return 0;
}
void BubbleSort(int arr[], int n)
{
	assert(arr != NULL && n > 1);
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				SwapInt(&arr[j], &arr[j + 1]);
		}
}
void BubbleSort2(int arr[], int n)
{
	assert(arr != NULL && n > 1);
	for (int i = 0; i < n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				SwapInt(&arr[j], &arr[j + 1]);
				flag = false;
			}
		}
		if (flag)
			break;
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
