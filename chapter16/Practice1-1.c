#include <stdio.h>
#define LENGTH 3 //세로
#define WIDTH 9 //가로

void printArray(int arr[LENGTH][WIDTH]) {
	int i, j;

	for(i = 0; i < LENGTH; i++) {
		for(j = 0; j < WIDTH; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int arr[LENGTH][WIDTH];
	int i, j;

	for(i = 0; i < LENGTH; i++) {
		for(j = 0; j < WIDTH; j++) {
			arr[i][j] = (i+2)*(j+1);
		}
	}
	printArray(arr);

	return 0;
}
//매개변수로 데이터가 넘어가는지, 주소가 넘어가는지 모르겠다.
