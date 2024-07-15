#include <iostream>
#include <string>
using namespace std;

inline int calc(int a) {
  return to_string(1LL << a)[0] - '0';
}

int solve(void) {
  int a, b; cin >> a >> b;

  while (++a <= 62) {
    if (calc(a) == b) return a;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}