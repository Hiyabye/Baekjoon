#include <iostream>
using namespace std;

bool solve(void) {
  int x; cin >> x;

  for (int a=1; a*a<=x; a++) {
    if (x % a) continue;
    if (2*a*a >= x) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << solve() << "\n";
  return 0;
}