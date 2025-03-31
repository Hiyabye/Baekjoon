#include <iostream>
#include <string>
using namespace std;

inline long long calc(int b, int k) {
  long long ret = b;
  while (--k) ret = 10 * ret + b;
  return ret;
}

void solve(void) {
  long long n; cin >> n;
  int k = to_string(n).length();

  int ans = 9 * k - 8;
  for (int i=1; i<=9; i++) {
    if (n >= calc(i, k)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}