#include <stdio.h>
#include <ctype.h>

int main(void) {
	int alpha[26] = {0}, highCount = 0, highKey = 0;
	char input = '\0';
	
	while (input != '\n') {
		scanf("%c", &input);
		if (input>='A' && input<='Z')       alpha[input-'A']++;
		else if (input>='a' && input<='z')  alpha[input-'a']++;
	}

	for (int i=0; i<26; i++) {
		if (alpha[i] > highCount) {
			highCount = alpha[i];
			highKey = i;
		} else if (alpha[i] == highCount)
			highKey = -1;
	}
	
	if (highKey == -1)  printf("?");
	else                printf("%c", highKey+'A');
	return 0;
}