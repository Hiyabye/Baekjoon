#include <iostream>
using namespace std;

void solve(void) {
  for (int a=6; a<=100; a++) {
    for (int b=2; b<a; b++) {
      for (int c=b+1; c<a; c++) {
        for (int d=c+1; d<a; d++) {
          if (a*a*a > b*b*b + c*c*c + d*d*d) continue;
          if (a*a*a < b*b*b + c*c*c + d*d*d) break;
          cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
        }
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}