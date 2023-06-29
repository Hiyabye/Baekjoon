#include <stdio.h>

int main(void) {
	int a, max=0;
	double score[1000], sum=0;

	scanf("%d", &a);
	for (int i=0; i<a; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > max) max = score[i];
	}
	for (int i=0; i<a; i++) {
		score[i] = score[i]/max*100;
		sum += score[i];
	}
	printf("%lf", sum/a);
	return 0;
}