#include <stdio.h>

int main(void) {
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = &arr;
	int i;

	for(i = 0; i < 5; i++)
		*(ptr+i) += 2;

	printf("arr[5] = { ");
	for(i = 0; i < 5; i++) {
		if(i == 4)
			printf("%d }", arr[i]);
		else
			printf("%d, ", arr[i]);
	}

	return 0;
}