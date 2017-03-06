#include <stdio.h>

int main(void) {
	char word[] = "";
	int i;
	scanf("%s", word);
	int wordLength = 0;

	while(word[wordLength] != '\0')
		wordLength++;

	for(i = wordLength-1; i >= 0; i--)
		printf("%c", word[i]);

	return 0;
}