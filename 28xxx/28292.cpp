#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << 1 + (n >= 3) + (n >= 6);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}