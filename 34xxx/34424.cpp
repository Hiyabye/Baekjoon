#include <iostream>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;

  cout << (n - 1) * x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}