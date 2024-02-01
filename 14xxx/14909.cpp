#include <iostream>
using namespace std;

void solve(void) {
  int cnt = 0, n;
  while (cin >> n) {
    if (n > 0) cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}