#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  vector<int> cnt(n, 0);
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      if (b[i] >= a[j]) {
        cnt[j]++;
        break;
      }
    }
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (cnt[i] > cnt[ans]) ans = i;
  }
  cout << ans + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}