#include <iostream>
using namespace std;

void solve(void) {
  long long R, r; cin >> R >> r;

  cout << R * (R - r * 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}