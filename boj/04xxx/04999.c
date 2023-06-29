#include <stdio.h>

int main(void) {
	int i=0, max, doc;
	char ah[1000];
	
	scanf(" %c", &ah[i]);
	while (ah[i] != 'h') {
		i++;
		scanf(" %c", &ah[i]);
	}
	max = i;
	i = 0;

	scanf(" %c", &ah[i]);
	while (ah[i] != 'h') {
		i++;
		scanf(" %c", &ah[i]);
	}
	doc = i;
	
	if (max >= doc) printf("go");
	else            printf("no");
	return 0;
}