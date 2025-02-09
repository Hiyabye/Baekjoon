#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  long long sum = 0, xor_sum = 0;
  while (m--) {
    int op; cin >> op;
    if (op == 1) {
      int x; cin >> x;
      sum += x; xor_sum ^= x;
    } else if (op == 2) {
      int x; cin >> x;
      sum -= x; xor_sum ^= x;
    } else if (op == 3) {
      cout << sum << "\n";
    } else if (op == 4) {
      cout << xor_sum << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}