#include <iostream>
using namespace std;

inline int calc(int s) {
  int ret = 0;
  for (int i=1; i*i<=s; i++) {
    if (s % i) continue;
    if (i * i == s) ret += i;
    else ret += i + s / i;
  }
  return ret - s;
}

void solve(void) {
  int s; cin >> s;
  while (s == calc(s) || s != calc(calc(s))) s++;

  cout << s << " " << calc(s);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}