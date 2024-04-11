#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long x = 1;
  while (n--) {
    long long a, b; char op; cin >> a >> op >> b;
    if (op == '+')      x = (a + b) - x;
    else if (op == '-') x = (a - b) * x;
    else if (op == '*') x = (a * b) * (a * b);
    else                x = (a % 2 ? (a + 1) / 2 : a / 2);
    cout << x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}