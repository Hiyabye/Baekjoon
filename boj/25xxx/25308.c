#include <stdio.h>
#include <math.h>

typedef struct Coord {
  double x;
  double y;
} Coord;

int ccw(Coord p1, Coord p2, Coord p3) {
  double d = (p2.y-p3.y)*p1.x+(p1.y-p2.y)*p3.x+(p3.y-p1.y)*p2.x;
  if (d < 0) return -1;
  else if (d > 0) return 1;
  else return 0;
}

int check(int a[]) {
  Coord p[8];

  for (int i=0; i<8; i++) {
    p[i].x = sin((double)i*45*M_PI/180)*a[i];
    p[i].y = cos((double)i*45*M_PI/180)*a[i];
  }

  for (int i=0; i<6; i++) {
    if (ccw(p[i], p[i+1], p[i+2]) != -1) return 0;
  }
  if (ccw(p[6], p[7], p[0]) != -1) return 0;
  if (ccw(p[7], p[0], p[1]) != -1) return 0;
  return 1;
}

int permutation(int arr[], int brr[], int index, int size) {
  if (index == size) {
    if (check(brr)) return 1;
    else return 0;
  }

  int count = 0;
  for (int i=0; i<size; i++) {
    if (brr[i] == -1) {
      brr[i] = arr[index];
      count += permutation(arr, brr, index+1, size);
      brr[i] = -1;
    }
  }
  return count;
}

int main(void) {
  int arr[8], brr[8];

  for (int i=0; i<8; i++) {
    scanf("%d", &arr[i]);
    brr[i] = -1;
  }

  printf("%d", permutation(arr, brr, 0, 8));
  return 0;
}