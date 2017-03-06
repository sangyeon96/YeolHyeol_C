#include <stdio.h>

int SquareByValue(int value) { //Call-by-value기반
	return value*value;
}

/*
int SquareByReference(int * address) {
	*address = (*address)*(*address);
	return *address;
}
이제보니 너무 복잡하게 한 거 같다..
답지에 의하면
*/
 
 void SquareByReference(int * ptr) { //Call-by-reference기반
 	int num = *ptr;
 	*ptr = num*num;
 }

int main(void) {
	int num = 30;
	printf("SquareByValue : %d\n", SquareByValue(num));
	//printf("SquareByReference : %d\n", SquareByReference(&num));
	SquareByReference(&num);
	printf("SquareByReference : %d\n", num);

	return 0;
}