#include <stdio.h>

int main(void) {
	int n, m, v, q, count = 0, node[200000];

	scanf("%d %d %d", &n, &m, &v);
	for (int i=0; i<n; i++) {
		scanf("%d", &node[i]);
		if (v-1<=i && i<n) count++;
	}
	for (int i=0; i<m; i++) {
		scanf("%d", &q);

		if (q < v) {
			printf("%d\n", node[q]);
		} else {
			q -= (v-1);
			q %= count;
			q += (v-1);
			printf("%d\n", node[q]);
		}
	}
	return 0;
}