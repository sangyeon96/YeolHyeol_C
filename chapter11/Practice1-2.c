#include <stdio.h>

int main(void) {
	char array[] = "Good time";
	int arrLen = sizeof(array)/sizeof(char);
	int i;

	for(i = 0; i < arrLen; i++) 
		printf("%c", array[i]);

	return 0;
}