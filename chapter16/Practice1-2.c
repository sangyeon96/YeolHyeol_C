#include <stdio.h>
#define LENGTH 2
#define WIDTH 4

int main(void) {
	int arrA[LENGTH][WIDTH] = {1, 2, 3, 4, 5, 6, 7, 8};
	int arrB[WIDTH][LENGTH];
	int i, j;

	printf("배열 A\n");
	for(i = 0; i < LENGTH; i++) {
		for(j = 0; j < WIDTH; j++) {
			printf("%d ", arrA[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < LENGTH; i++) {
		for(j = 0; j < WIDTH; j++) {
			arrB[j][i] = arrA[i][j];
		}
	}

	/*
	arrB[0][0] = arrA[0][0]
	arrB[1][0] = arrA[0][1]
	arrB[2][0] = arrA[0][2]
	arrB[3][0] = arrA[0][3]

	arrB[0][1] = arrA[1][0]
	arrB[1][1] = arrA[1][1]
	arrB[2][1] = arrA[1][2]
	arrB[3][1] = arrA[1][3]
	*/

	printf("배열 B\n");
	for(i = 0; i < WIDTH; i++) {
		for(j = 0; j < LENGTH; j++) {
			printf("%d ", arrB[i][j]);
		}
		printf("\n");
	}

	return 0;
}