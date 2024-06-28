#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(void) {
  vector<int> cnt(7, 0);
  for (int i=0; i<4; i++) {
    int x; cin >> x;
    cnt[x]++;
  }

  for (int i=1; i<=6; i++) {
    if (cnt[i] == 4) return 50000 + i * 5000;
    if (cnt[i] == 3) return 10000 + i * 1000;
    if (cnt[i] == 2) {
      for (int j=1; j<=6; j++) {
        if (j == i) continue;
        if (cnt[j] == 2) return 2000 + i * 500 + j * 500;
      }
      return 1000 + i * 100;
    }
  }
  for (int i=6; i>=1; i--) {
    if (cnt[i] == *max_element(cnt.begin(), cnt.end())) return i * 100;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int ans = 0;
  int n; cin >> n;
  while (n--) ans = max(ans, solve());
  cout << ans;
  return 0;
}