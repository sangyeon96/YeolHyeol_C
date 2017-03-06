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
	//새우깡을 최대로 사면 money/shrimp_price해서 5이다.
	//하지만 그러면 나머지가 0이다.
	//적어도 하나 이상 구매해야한다.
	//그러면 새우깡을 최대로 사면 3이다.
	//근데 이걸 컴퓨터가 어떻게 알 수 있을까..
}

void choice_react(int choice) {
	switch(choice) {
		case 1:
		case 2:
		case 3: //case개수를 알수없다.
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
	choice_react(choice);

	return 0;
}