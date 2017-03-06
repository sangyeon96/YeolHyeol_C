#include <stdio.h>

int main(void) {
	int arr[3] = {15, 25, 35};
	int *ptr = &arr[0];
	//ptr포인터변수는 arr[0]을 가리킨다. 그 안의 데이터는 15

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	//실행하기 전 예측하자면 ptr[]와 arr[]은 같은 값이 나오고,
	//*ptr과 *arr은 ptr[0], arr[0]으로써 같은 주소를 가리키므로 15
	 
	return 0;
}