#include <stdio.h>

int person[15][15];

int calculate(int a, int b) {
	int result = 0;
	
	for (int i=1; i<=b; i++)
		result += person[a-1][i];
	return result;
}

int main(void) {
	int t, a, b;
	
	for (int i=1; i<=14; i++)
		person[0][i] = i;
	
	for (int i=1; i<=14; i++)
		for (int j=1; j<=14; j++)
			person[i][j] = calculate(i, j);

	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", person[a][b]);
	}
	return 0;
}