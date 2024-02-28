#include <iostream>
using namespace std;

bool solve(void) {
  int a; cin >> a;

  return (a & -a) == a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) cout << solve() << "\n";
  return 0;
}