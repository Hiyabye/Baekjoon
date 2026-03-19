#include <iostream>
using namespace std;

void solve(void) {
  long long h, s; cin >> h >> s;

  if (h <= 2) cout << 1;
  else if (h <= 4) cout << s + 2;
  else cout << (h + s * 3 + 1) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}