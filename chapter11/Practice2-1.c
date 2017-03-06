#include <stdio.h>

int main(void) {
	char word[] = "";
	scanf("%s", word);
	int wordLength = 0;

	while(word[wordLength] != '\0')
		wordLength++;
		
	printf("%d\n", wordLength);

	return 0;
}