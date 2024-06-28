#include <iostream>
using namespace std;

void solve(void) {
  int h, i, a, r, c; cin >> h >> i >> a >> r >> c;

  cout << h * i - a * r * c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}