#include <iostream>
using namespace std;

void solve(void) {
  bool ans = true;

  int prev = -1000000, cur = 0;
  while (cin >> cur) {
    if (prev > cur) ans = false;
    prev = cur;
  }
  cout << (ans ? "Good" : "Bad");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}