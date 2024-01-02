#include <iostream>
using namespace std;

int process(int n, int r, int c) {
  if (n == 0) return 0;

  int size = 1 << (n-1);
  int x = r / size, y = c / size;
  return process(n-1, r % size, c % size) + size * size * (x*2+y);
}

void solve(void) {
  int n, r, c;
  cin >> n >> r >> c;
  cout << process(n, r, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}