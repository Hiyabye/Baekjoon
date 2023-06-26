#include <stdio.h>
#include <string.h>

void match(char s[10][31], int a[10], int round, int n) {
  int sCount = 0;
  int rCount = 0;
  int pCount = 0;

  for (int i=0; i<n; i++) {
    if (a[i] == 0) continue;
    if (s[i][round] == 'S') sCount++;
    if (s[i][round] == 'R') rCount++;
    if (s[i][round] == 'P') pCount++;
  }

  // Rock wins
  if (sCount > 0 && rCount > 0 && pCount == 0) {
    for (int i=0; i<n; i++) {
      if (s[i][round] == 'S') a[i] = 0;
    }
  }

  // Scissors wins
  if (sCount > 0 && rCount == 0 && pCount > 0) {
    for (int i=0; i<n; i++) {
      if (s[i][round] == 'P') a[i] = 0;
    }
  }

  // Paper wins
  if (sCount == 0 && rCount > 0 && pCount > 0) {
    for (int i=0; i<n; i++) {
      if (s[i][round] == 'R') a[i] = 0;
    }
  }
}

int win(int a[10], int n) {
  int winner = -1;
  for (int i=0; i<n; i++) {
    if (a[i] == 1) {
      if (winner == -1) {
        winner = i;
      } else {
        winner = -2;
      }
    }
  }
  return winner;
}

void solve(void) {
  int n, a[10];
  char s[10][31];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    a[i] = 1;
    scanf("%s", s[i]);
  }

  for (int i=0; i<strlen(s[0]); i++) {
    match(s, a, i, n);
    int winner = win(a, n);
    if (winner != -2) {
      printf("%d\n", winner+1);
      return;
    }
  }
  printf("0\n");
}

int main(void) {
  int t;

  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}