#include <iostream>
#include <vector>
using namespace std;

inline int calc(const vector<int> &w, const vector<int> &s, const vector<int> &e, int n, int mask) {
  vector<vector<bool>> t(5, vector<bool>(11, false));
  for (int i=0; i<n; i++) {
    if ((mask >> i) & 1) {
      if (w[i] == 5) return 0;
      for (int j=s[i]; j<=e[i]; j++) {
        if (t[w[i]][j]) return 0;
        t[w[i]][j] = true;
      }
    }
  }

  int ret = 0;
  for (int i=1; i<=4; i++) for (int j=1; j<=10; j++) {
    if (t[i][j]) ret++;
  }
  return ret;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> w(n), s(n), e(n);
  for (int i=0; i<n; i++) cin >> w[i] >> s[i] >> e[i];

  int ans = 0;
  for (int mask=0; mask<(1<<n); mask++) {
    if (calc(w, s, e, n, mask) == k) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}