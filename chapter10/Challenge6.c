#include <stdio.h>

int main(void) {
	int hour = 0, minute = 0, second;

	printf("Input second : ");
	scanf("%d", &second);
	if(second/3600 != 0) {
		hour = second/3600;
		second = second%3600;
	}
	if(second/60 != 0) {
		minute = second/60;
		second = second%60;
	}
	printf("[h:%d, m:%d, s:%d]\n", hour, minute, second);

	return 0;
}