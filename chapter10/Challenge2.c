#include <stdio.h>

void printTimesTables(int a, int b) {
	int i, j;

	for(i = a; i <= b; i ++) {
		for(j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

int main(void) {
	int a, b;

	printf("Input two integers. I'll print timestables between two integers : ");
	scanf("%d %d", &a, &b);
	if(a < b)
		printTimesTables(a, b);
	else
		printTimesTables(b, a);

	return 0;
}