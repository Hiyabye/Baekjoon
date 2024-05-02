#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n <= 2 ? 1 : n - 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}