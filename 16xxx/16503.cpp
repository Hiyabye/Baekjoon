#include <algorithm>
#include <iostream>
using namespace std;

int calc(int a, int b, char op) {
  if (op == '+') return a + b;
  if (op == '-') return a - b;
  if (op == '*') return a * b;
  if (op == '/') return a / b;
  return 0;
}

void solve(void) {
  int k1, k2, k3; char o1, o2;
  cin >> k1 >> o1 >> k2 >> o2 >> k3;

  int c1 = calc(calc(k1, k2, o1), k3, o2);
  int c2 = calc(k1, calc(k2, k3, o2), o1);
  cout << min(c1, c2) << "\n" << max(c1, c2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}