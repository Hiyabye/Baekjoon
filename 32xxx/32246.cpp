#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n == 2 ? 3 : n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}