#include <stdio.h>

void insertionSort(int arr[], int size);

void main() {
	int arr[10] = { 9,7,5,3,1,10,8,6,4,2 };
	int size = sizeof(arr) / sizeof(int);
	insertionSort(arr, size);
	
}

void insertionSort(int arr[], int size) {
	int key = 0;
	int i = 0;
	for (int j = 1; j < size; j++) {
		key = arr[j];
		i = j - 1;
		while(i>=0 && arr[i] > key){
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = key;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n",arr[i]);
	}
}
