#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	//포인터 변수를 사용하여 변수 값 증가 및 감소
	(*ptr1) += 10; //num1 = 20
	(*ptr2) -= 10; //num2 = 10

	//가리키는 대상 바꾸기
	*ptr1 = &num2;
	*ptr2 = &num1;

	printf("ptr1이 가리키는 변수에 저장된 값 : %d\n", *ptr1); //10
	printf("ptr2가 가리키는 변수에 저장된 값 : %d\n", *ptr2); //20

	return 0;
}