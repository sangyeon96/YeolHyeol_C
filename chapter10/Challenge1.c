#include <stdio.h>

int main(void) {
	int num;
	
	printf("Input decimal number. I'll convert it into hexadecimal number : ");
	scanf("%d", &num);
	printf("%X\n", num);

	return 0;
}