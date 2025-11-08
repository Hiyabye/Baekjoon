#include <iostream>
using namespace std;

inline long long calc(long long c) {
  long long ret = 0;
  while (c) ret += c % 10, c /= 10;
  return ret;
}

void solve(void) {
  long long c; cin >> c;

  while (c > 9) c = calc(c);
  cout << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}