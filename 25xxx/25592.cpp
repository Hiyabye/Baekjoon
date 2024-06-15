#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1; ; i++) {
    if (n >= i*(i+1)/2) continue;
    cout << (i & 1 ? i*(i+1)/2-n : 0);
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}