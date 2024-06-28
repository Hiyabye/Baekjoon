#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << (a * b + 24199) / 24200;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}