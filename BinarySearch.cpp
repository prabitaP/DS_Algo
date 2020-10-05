#include <cstdio>
#include <iostream>
#define LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))

int binary_search(int * arr, int target) {
        int left = 0, right = (LENGTH(arr)+1), mid;
	while(left <= right) {
		mid = (left+right)/2;
		if(target == arr[mid])
			return mid;
		if(target < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
        return -1;
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
        int target;
        printf("Enter the element to find: ");
        scanf("%d", &target);
        printf("Element at: %d", binary_search(array, target));
}

