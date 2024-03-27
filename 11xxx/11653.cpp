#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=2; i<=n; i++) {
    while (!(n % i)) {
      cout << i << "\n";
      n /= i;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}