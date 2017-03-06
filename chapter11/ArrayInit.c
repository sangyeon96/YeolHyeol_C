#include <stdio.h>

int main(void) {
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5, 6, 7};
	int arr3[5] = {1, 2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기 : %d\n", sizeof(arr1)); //20
	printf("배열 arr2의 크기 : %d\n", sizeof(arr2)); //28
	printf("배열 arr3의 크기 : %d\n", sizeof(arr3)); //20
	//여기서 핵심은 여백의 공간이 0으로 초기화 되냐 아니냐이다.

	ar1Len = sizeof(arr1)/sizeof(int); //5
	ar2Len = sizeof(arr2)/sizeof(int); //7
	ar3Len = sizeof(arr3)/sizeof(int); //5

	for(i=0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for(i=0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for(i=0; i < ar3Len; i++)
		printf("%d ", arr3[i]); //1 2 0 0 0 
	printf("\n");

	return 0;
 }