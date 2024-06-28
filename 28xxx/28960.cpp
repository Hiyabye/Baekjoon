#include <iostream>
using namespace std;

bool solve(void) {
  int h, l, a, b; cin >> h >> l >> a >> b;

  return (a <= l && b <= 2*h) || (b <= l && a <= 2*h);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}