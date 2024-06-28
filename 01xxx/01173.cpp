#include <iostream>
using namespace std;

int solve(void) {
  int N, m, M, T, R; cin >> N >> m >> M >> T >> R;
  if (m + T > M) return -1;

  int ans = 0, cur = m;
  while (N > 0) {
    if (cur + T <= M) {
      cur += T;
      N--;
    } else {
      cur -= R;
      if (cur < m) cur = m;
    }
    ans++;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}