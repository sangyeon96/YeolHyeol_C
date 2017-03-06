#include <stdio.h>

int printMax(int array[], int length) {
	int i;
	int max_id = 0;

	for(i = 0; i < length; i++)
		if(array[max_id] < array[i])
			max_id = i;

	return array[max_id];
}

int printMin(int array[], int length) {
	int i;
	int min_id = 0;

	for(i = 0; i < length; i++)
		if(array[min_id] > array[i])
			min_id = i;

	return array[min_id];
}

int printTotal(int array[], int length) {
	int i;
	int sum = 0;

	for(i = 0; i < length; i++)
		sum += array[i];

	return sum;
}

int main(void) {
	int array[5];
	int arrLen = sizeof(array)/sizeof(int);
	int i;

	for(i = 0; i < arrLen; i++)
		scanf("%d", &array[i]);
	//예전에 배웠던 배열엔 & 안 붙여도 된다는건 어떨 때 그런거지?
	//&를 붙이는게 해당 배열의 주소로 가는 방법이다.
	/*
	&을 붙이지 않는 경우
	char str[5];
	scanf("%d", str);

	이 경우 배열 자체가 배열의 주소이기 때문에 &연산자를 붙일 필요가 없다.
	*/
	printf("입력된 정수 중에서 최댓값 : %d\n", printMax(array, arrLen));
	printf("입력된 정수 중에서 최솟값 : %d\n", printMin(array, arrLen));
	printf("입력된 정수의 총 합 : %d\n", printTotal(array, arrLen));

	return 0;
}