#include <stdio.h>

int main(void) {
	int n, i;
	int k = 1;

	printf("Input constant n. I'll print k which satisfies 2^k <= n : ");
	scanf("%d", &n);

	for(i = 0; ; i++) {
		if(k <= n) {
			k *= 2;
			continue;
		}
		else
			break;
	}

	printf("k which satisfies 2^k <= n is %d\n", i-1);
	return 0;
}