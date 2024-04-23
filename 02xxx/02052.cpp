#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
  int n;
  scanf("%d", &n);

  printf("%.*f", n, pow(0.5, n));
  return 0;
}