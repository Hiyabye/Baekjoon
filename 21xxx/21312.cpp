#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << (a & 1 || b & 1 || c & 1 ? (a & 1 ? a : 1) * (b & 1 ? b : 1) * (c & 1 ? c : 1) : a * b * c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}