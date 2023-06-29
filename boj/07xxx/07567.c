#include <stdio.h>
#include <string.h>

int main(void) {
	int height = 10;
	char plate[50];

	scanf("%s", plate);
	for (int i=1; i<strlen(plate); i++) {
		if (plate[i] == '\n')                       break;
		else if (plate[i]=='(' && plate[i-1]==')')  height += 10;
		else if (plate[i]==')' && plate[i-1]=='(')  height += 10;
		else if (plate[i]=='(' && plate[i-1]=='(')  height += 5;
		else if (plate[i]==')' && plate[i-1]==')')  height += 5;
	}
	printf("%d", height);
	return 0;
}