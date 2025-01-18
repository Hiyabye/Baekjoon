#include <iostream>
#include <vector>
using namespace std;

inline int check(int n, const vector<int> &a) {
  for (int i=0; i<n; i++) if (a[i] == 0) return i;
  for (int i=0; i<n; i++) if (a[i] == 1) return i;
  return -1;
}

void solve(void) {
  int n, g; cin >> n >> g;

  vector<int> ans(n, 0);
  while (g--) {
    int x; cin >> x;
    int idx = check(n, ans);
    while (x--) {
      if (++ans[idx] == 2) idx = check(n, ans);
    }
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}