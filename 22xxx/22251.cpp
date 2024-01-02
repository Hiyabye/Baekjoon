#include <iostream>
using namespace std;

void solve(void) {
  // precompute
  int num[10] = {0b1110111, 0b0010010, 0b1011101, 0b1011011, 0b0111010, 0b1101011, 0b1101111, 0b1010010, 0b1111111, 0b1111011};

  // input
  int n, k, p, x;
  cin >> n >> k >> p >> x;

  // calculate
  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (i == x) continue;
    int cnt = 0, from = x, to = i;
    for (int j=0; j<k; j++) {
      cnt += __builtin_popcount(num[from%10] ^ num[to%10]);
      from /= 10, to /= 10;
    }
    if (cnt <= p) ans++;
  }

  // output
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}