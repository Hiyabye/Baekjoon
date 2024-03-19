#include <iostream>
using namespace std;

inline int mod(int a, int b) {
  return (a % b + b) % b;
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  cout << mod(m + k - 4, n) + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}