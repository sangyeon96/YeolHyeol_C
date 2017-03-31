/*
실행의 예
현재 당신이 소유하고 있는 금액: 3500
크림빵 1개, 새우깡 2개, 콜라 4개
크림빵 2개, 새우깡 3개, 콜라 1개
크림빵 4개, 새우깡 1개, 콜라 2개
어떻게 구입하시겠습니까?
*/

#include <stdio.h>

void calculate_cases(int money, int creambread_price, int shrimpcracker_price, int coke_price) {
	//새우깡이 제일 비싸다는걸 프로그램이 알고있다고 가정하자
	int count = 0;
	int shrimpcracker_amount = money/shrimpcracker_price;
	int creambread_amount = 1;
	int coke_amount = 1;
	int i;
	for(i = shrimpcracker_amount; i >= 1; i--) {
		if(shrimpcracker_price*shrimpcracker_amount
			+ creambread_price*creambread_amount
			+ coke_price*coke_amount == 3500) {
			count += 1;
			printf("%d번 : 새우깡 %d개, 크림빵 %d개, 콜라 %d개\n", count, shrimpcracker_amount, creambread_amount, coke_amount);
		}
			
	}
}

int main(void) {
	int money = 3500;
	int creambread_price = 500;
	int shrimpcracker_price = 700;
	int coke_price = 400;
	int choice;

	printf("현재 당신이 소유하고 있는 금액: %d\n", money);
	calculate_cases(money, creambread_price, shrimpcracker_price, coke_price);
	printf("어떻게 구입하시겠습니까? ");
	scanf("%d", &choice);
	printf("%d번으로 구입 완료하였습니다.\n", choice);

	return 0;
}