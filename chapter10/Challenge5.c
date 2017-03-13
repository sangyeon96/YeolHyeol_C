#include <stdio.h>

int main(void) {
	int number;
	int count = 0;

	for (number = 2; ; number++) {
		if(count == 10)
			break;
		else if(number % 2 == 0 && number != 2)
			continue;
		else if(number % 3 == 0 && number != 3)
			continue;
		else if(number % 5 == 0 && number != 5)
			continue;
		else {
			printf("%d ", number);
			count += 1;
		}
	}

	return 0;
}