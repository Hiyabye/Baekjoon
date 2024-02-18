#include <cmath>
#include <iostream>
using namespace std;

int diff(int n, int m, int c, int M, int C) {
  return abs(M * m + C * c - n);
}

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  int c; cin >> c;
  
  int M = 0, C = 0;
  for (int i=0; i<=(n+m-1)/m; i++) {
    for (int j=(n-i*m)/c; j<=(n-i*m+c-1)/c; j++) {
      if (i < 0 || j < 0) continue;
      if (diff(n, m, c, i, j) < diff(n, m, c, M, C)) M = i, C = j;
    }
  }
  cout << M << " " << C;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}