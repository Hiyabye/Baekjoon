#include <iostream>
using namespace std;

bool solve(void) {
  long long a, b; cin >> a >> b;
  if (a == b) return false;

  return b % a == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) cout << solve() << "\n";
  return 0;
}