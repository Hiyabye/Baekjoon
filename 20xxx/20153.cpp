#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(const vector<int> &b) {
  int ret = 0;
  for (int i=0; i<32; i++) {
    if (b[i] & 1) ret |= (1 << i);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> b(32, 0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<32; j++) {
      if (a[i] & (1 << j)) b[j]++;
    }
  }

  int ans = calc(b);
  for (int i=0; i<n; i++) {
    for (int j=0; j<32; j++) {
      if (a[i] & (1 << j)) b[j]--;
    }
    ans = max(ans, calc(b));
    for (int j=0; j<32; j++) {
      if (a[i] & (1 << j)) b[j]++;
    }
  }
  cout << ans << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}