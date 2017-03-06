#include <stdio.h>

int main(void) {
	char word[] = "";
	int i;
	scanf("%s", word);
	int wordLength = 0;
	while(word[wordLength] != '\0')
		wordLength++;

	int max_id = 0;
	for(i = 0; i < wordLength; i++) {
		if(word[max_id] < word[i])
			max_id = i;
	}

	printf("%c\n", word[max_id]);
	
	return 0;
}