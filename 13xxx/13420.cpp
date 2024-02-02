#include <iostream>
using namespace std;

bool solve(void) {
  long long a, b, c; char op1, op2;
  cin >> a >> op1 >> b >> op2 >> c;

  if (op1 == '+') return a + b == c;
  if (op1 == '-') return a - b == c;
  if (op1 == '*') return a * b == c;
  return a / b == c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "correct" : "wrong answer") << "\n";
  return 0;
}