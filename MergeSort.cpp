#include <cstdio>
#include <iostream>

int merge(int * a, int left, int middle, int right) {
	int l1, l2, i;
	for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      		if(a[l1] <= a[l2])
         		b[i] = a[l1++];
     	 	else
         		b[i] = a[l2++];
   	}
	while(l1 <= mid)    
		b[i++] = a[l1++];
	while(l2 <= high)
		b[i++] = a[l2++];
	for(i = low; i <= high; i++)
		a[i] = b[i];
}

int * merge_sort(int left, int right) {
	int middle;
	if(left < right) {
		middle = (left + right) / 2;
		sort(left, middle);
		sort(middle+1, right);
		merging(low, mid, high);
	}
	else
		return;
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
        sort(0, n
        for(int i = 0; i < LENGTH(array); i++)
                printf("%d ", array[i]);
}

