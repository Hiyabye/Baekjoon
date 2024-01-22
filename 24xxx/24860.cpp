#include <iostream>
using namespace std;

void solve(void) {
  long long v1, j1; cin >> v1 >> j1;
  long long v2, j2; cin >> v2 >> j2;
  long long v3, d3, j3; cin >> v3 >> d3 >> j3;

  cout << (v1 * j1 + v2 * j2) * (v3 * d3 * j3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}