#include <iostream>
using namespace std;

void solve(void) {
  int n = 100;

  cout << n << "\n";
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      cout << (i == j || i == n || j == n ? 0 : 10000) << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}