#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;

  return a + b == c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "correct!" : "wrong!");
  return 0;
}