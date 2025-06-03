#include <iostream>
#include <string>
using namespace std;

inline int calc(int n) {
  return to_string(n).length();
}

void solve(void) {
  long long n; cin >> n;

  int ans = 0;
  while (calc(n) == calc(n << 1)) ans++, n <<= 1;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}