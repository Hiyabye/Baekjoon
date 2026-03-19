#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<int> &cnt, int a, int b, int c) {
  for (int i=100; i>=1; i--) {
    if (cnt[i] >= 2) continue;
    if (cnt[i] == 1 && (i == a || i == b || i == c)) continue;
    if (cnt[i] == 1 && i != a && i != b && i != c) return false;
    if (cnt[i] == 0 && (i == a || i == b || i == c)) return true;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;
  vector<int> cnt(101, 0);
  while (n--) {
    int a, b, c; cin >> a >> b >> c;
    cnt[a]++; cnt[b]++; cnt[c]++;
  }

  int ans = 0;
  for (int i=1; i<=98; i++) for (int j=i+1; j<=99; j++) for (int k=j+1; k<=100; k++) {
    if (check(cnt, i, j, k)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}