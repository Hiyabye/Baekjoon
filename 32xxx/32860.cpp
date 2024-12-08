#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << "SN " << n;
  if (m <= 26) {
    cout << (char)('A' + m - 1);
  } else {
    cout << (char)('a' + (m - 1) / 26 - 1) << (char)('a' + (m - 1) % 26);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}