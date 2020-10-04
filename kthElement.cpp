#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int generateNumber(int right, int left, int size) {
	time_t t;
	srand((unsigned) time(&t));
	int random = (rand() % (right - left + 1)) + (size - left);
	return random;
}

int partition (int *arr, int left, int right, int pivotIndex) {
	int pivotValue = arr[pivotIndex];
	int i = left; // lesser item's tail index
	for (int j = left; j <= right - 1; ++j) {
		if (arr[j] <= pivotValue) {
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[right]);
	return i;
}

int kthLargest(int *arr, int k, int size) {
	int left = 0;
	int right = size-1;
	while (left <= right) {
		int randomPivotIndex = generateNumber(right, left, size);
		int finalIndexOfRandomPivot = partition(arr, left, right, randomPivotIndex);
		if (finalIndexOfRandomPivot == size - k) {
			return arr[finalIndexOfRandomPivot];
		}
		else if (finalIndexOfRandomPivot > size - k) {
			right = finalIndexOfRandomPivot - 1;
		}
		else {
			left = finalIndexOfRandomPivot + 1;
		}
	}
	return -1;
}

void main() {
        int size;
        printf("\nEnter the size of array: ");
        scanf("%d", &size);
        int arr[size];
        printf("\nEnter the first array: ");
        for (register int i = 0; i < size; ++i) {
                printf("\narr[%d]: ", i);
                scanf("%d", &arr[i]);
        }
	int k;
	printf("\nEnter the value of k for kth largest element to find: ");
	scanf("%d", &k);
	int m = k;
	k = k - 1;
	printf("\n%dth largest element is : %d\n", m, kthLargest(arr, k, size));
}
