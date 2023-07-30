#include <bits/stdc++.h>
using namespace std;

int n, ans_min = INT_MAX, ans_max = INT_MIN;
vector<int> a, b, c;

void backtrack(int idx) {
  if (idx == n-1) {
    int ret = a[0];
    for (int i=0; i<n-1; i++) {
      if (c[i] == 0) ret += a[i+1];
      else if (c[i] == 1) ret -= a[i+1];
      else if (c[i] == 2) ret *= a[i+1];
      else ret /= a[i+1];
    }
    ans_min = min(ans_min, ret);
    ans_max = max(ans_max, ret);
    return;
  }

  for (int i=0; i<4; i++) {
    if (!b[i]) continue;
    b[i]--;
    c[idx] = i;
    backtrack(idx+1);
    b[i]++;
  }
}

void solve(void) {
  cin >> n;
  a.resize(n); b.resize(4); c.resize(n-1);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<4; i++) cin >> b[i];

  backtrack(0);
  cout << ans_max << "\n" << ans_min;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}