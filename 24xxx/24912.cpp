#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &a) {
  for (int i=1; i<=n; i++) {
    if (a[i] < 1 || a[i] > 3 || a[i] == a[i-1] || a[i] == a[i+1]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+2, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  for (int i=1; i<=n; i++) {
    if (a[i]) continue;
    a[i] = 1;
    while (a[i] == a[i-1] || a[i] == a[i+1]) a[i]++;
  }

  if (check(n, a)) {
    for (int i=1; i<=n; i++) cout << a[i] << " ";
  } else {
    cout << -1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}