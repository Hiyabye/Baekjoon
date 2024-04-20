#include <iostream>
using namespace std;

bool solve(void) {
  int o, a, k; cin >> o >> a >> k;

  for (int i=1; i<=o/a; i++) {
    for (int j=1; j<=o/k; j++) {
      if (a*i + k*j == o) return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}