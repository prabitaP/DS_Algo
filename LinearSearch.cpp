#include <cstdio>
#include <iostream>
#define LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))

int linear_search(int * arr, int target) {
        for(int i = 0; i <= (LENGTH(arr)+1); i++)
                if(target == arr[i])
        		return i;
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
        linear_search(array, target);
	for(int i = 0; i < LENGTH(array); i++)                                    
                printf("%d ", array[i]);                                          
}
