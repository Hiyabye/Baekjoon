#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n) {
  vector<int> cnt(10, 0);
  int tmp = n;
  while (tmp > 0) {
    cnt[tmp % 10]++;
    tmp /= 10;
  }

  if (cnt[0]) return false;
  for (int i=1; i<=9; i++) {
    if (cnt[i] > 1) return false;
    if (cnt[i] && n % i) return false;
  }
  return true;
}

void solve(void) {
  int l, h; cin >> l >> h;

  int ans = 0;
  for (int i=l; i<=h; i++) {
    if (check(i)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}