#include <iostream>
using namespace std;

void solve(void) {
  int v, n; cin >> v >> n;

  for (int i=1; i<=9; i++) {
    cout << (v * n * i + 9) / 10 << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}