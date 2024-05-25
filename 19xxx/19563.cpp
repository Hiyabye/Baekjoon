#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;

  c -= abs(a) + abs(b);
  return !(c < 0 || c & 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}