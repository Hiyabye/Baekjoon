#include <iostream>
using namespace std;

void solve(void) {
  int l, w; cin >> l >> w;
  if (w < l || w > l * 26) {
    cout << "impossible";
    return;
  }

  for (int i=0; i<w%l; i++) cout << (char)('a' + w/l);
  for (int i=w%l; i<l; i++) cout << (char)('a' + w/l - 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}