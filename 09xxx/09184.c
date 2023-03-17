#include <stdio.h>

int w[101][101][101] = { 0 };

int cal(int a, int b, int c) {
  int x=a+50, y=b+50, z=c+50;

  if (w[x][y][z] != 0)      return w[x][y][z];
  if (a<=0 || b<=0 || c<=0) return 1;
  if (a>20 || b>20 || c>20) return cal(20,20,20);
  
  if (a<b && b<c) {
    w[x][y][z-1] = cal(a,b,c-1);
    w[x][y-1][z-1] = cal(a,b-1,c-1);
    w[x][y-1][z] = cal(a,b-1,c);
    return w[x][y][z-1]+w[x][y-1][z-1]-w[x][y-1][z];
  } else {
    w[x-1][y][z] = cal(a-1,b,c);
    w[x-1][y-1][z] = cal(a-1,b-1,c);
    w[x-1][y][z-1] = cal(a-1,b,c-1);
    w[x-1][y-1][z-1] = cal(a-1,b-1,c-1);
    return w[x-1][y][z]+w[x-1][y-1][z]+w[x-1][y][z-1]-w[x-1][y-1][z-1];
  }
}

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  while (!(a==-1 && b==-1 && c==-1)) {
    printf("w(%d, %d, %d) = %d\n", a, b, c, cal(a,b,c));
    scanf("%d %d %d", &a, &b, &c);
  }
  return 0;
}