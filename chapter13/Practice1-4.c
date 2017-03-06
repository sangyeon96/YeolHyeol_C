#include <stdio.h>

int main(void) {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int * ptr1 = &arr;
	int * ptr2 = &arr[5];
	int temp;
	int i;

	/*
	temp = *(ptr1);
	*(ptr1) = *(ptr2);
	*(ptr2) = temp;

	temp = *(ptr1+1);
	*(ptr1+1) = *(ptr2-1);
	*(ptr2-1) = temp;

	temp = *(ptr1+2); 
	*(ptr1+2) = *(ptr2-2);
	*(ptr2-2) = temp;
	*/

	for(i = 0; i < 3; i++) {
		temp = *(ptr1+i);
		*(ptr1+i) = *(ptr2-i);
		*(ptr2-i) = temp;
	}

	printf("arr[6] = { ");
	for(i = 0; i < 6; i++) {
		if(i == 5)
			printf("%d }", arr[i]);
		else
			printf("%d, ", arr[i]);
	}

	return 0;
}