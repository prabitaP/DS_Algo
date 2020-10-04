#include <iostream>
#include <cstdio>
#define LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))
void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
}
int * selection_sort(int * arr) {
	int min = 0;
	// find the smallest element and put it at location 1
        for(int i = 0; i <= (LENGTH(arr)+1); i++) {
                if(arr[i] < arr[min]) // imp: you wrote min instead of arr[min]
			min = i;
        	for(int j = i+1; j <= (LENGTH(arr)+1); j++)
			if(arr[j] < arr[min])
				min = j;
		//if(min != i)
			swap(&arr[i], &arr[min]);
	}
        return arr;
}

void main() {
        int size;
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        int array[size];
        for(int i = 0; i < LENGTH(array); i++) {
                printf("array[%d]: ", i);
                scanf("%d", &array[i]);
        }
        selection_sort(array);
        for(int i = 0; i < LENGTH(array); i++)
                printf("%d ", array[i]);
}

