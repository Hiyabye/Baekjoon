#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cnt[3] = {0, 0, 0};
  while (n--) {
    int x, y; cin >> x >> y;
    cnt[(x-y+3) % 3]++;
  }
  cout << max(cnt[1], cnt[2]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}