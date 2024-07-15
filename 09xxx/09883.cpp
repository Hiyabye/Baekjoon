#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  long long ans = 0;
  for (int i=0; i<16; i++) {
    if (y & (1 << i)) ans |= (1LL << 2*i);
    if (x & (1 << i)) ans |= (1LL << 2*i+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}