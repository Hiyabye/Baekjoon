#include <stdio.h>

char board[50][50];

int getCount(int startX, int startY, int n, int m) {
	int i, j, start, turn, min = n*m;
	
	for (start=1; start<=2; start++) {
    int count = 0;
		for (i=startX; i<startX+8; i++) {
			turn = start;
			for (j=startY; j<startY+8; j++) {
				if (turn == 1) {
					if (board[i][j] != 'W') count++;
					turn = 2;
				} else if (turn == 2) {
					if (board[i][j] != 'B') count++;
					turn = 1;
				}
			}
      if (start == 1) start = 2;
      else            start = 1;
		}
		if (count < min) min = count;
	}
	return min;
}

int main(void) {
	int i, j, n, m, count, min;

	scanf("%d %d", &n, &m);
	min = n*m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			scanf(" %c", &board[i][j]);
      
	for (i=0; i<=n-8; i++) {
		for (j=0; j<=m-8; j++) {
			count = getCount(i, j, n, m);
			if (count < min) min = count;
		}
	}
	printf("%d\n", min);
	return 0;
}