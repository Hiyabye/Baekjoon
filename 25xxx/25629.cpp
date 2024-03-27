#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int odd = 0, even = 0;
  while (n--) {
    int x; cin >> x;
    if (x & 1) odd++;
    else even++;
  }
  cout << (odd - even == 0 || odd - even == 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}