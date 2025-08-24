#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    int cnt; cin >> cnt;
    if (cnt > 1) a++, b += 2;
    else a = max(a, b) + 1, b = 0;
  }
  cout << max(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}