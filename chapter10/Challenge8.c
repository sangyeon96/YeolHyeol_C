#include <stdio.h>

/* 이걸 재귀로 바꾼다고 생각하면 됨
int i, num;
int result = 1;
for(i = num; i > 0; i--) {
	result *= 2;
}
*/

int power(int num) {
	if(num == 0)
		return 1;
	else {
		num = num-1;
		return 2*power(num);
	}
}

int main(void) {
	int num;

	printf("Input Integer.  I'll print 2 to the Integer's Power : ");
	scanf("%d", &num);
	printf("2 to the %d power is %d\n", num, power(num));

	return 0;
}