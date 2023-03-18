#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char word[100];
	
	scanf("%s", word);
	for (int i=97; i<123; i++) {
		char *p = strchr(word, (char)i);
		if (p != NULL)  printf("%d ", (int)(p-word));
		else            printf("-1 ");
	}
	return 0;
}