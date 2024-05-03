#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int one(vector<int> &a, int idx, int x) {
  a[idx] -= x;
  return 3 * x;
}

int two(vector<int> &a, int idx, int x) {
  a[idx] -= x; a[idx+1] -= x;
  return 5 * x;
}

int three(vector<int> &a, int idx, int x) {
  a[idx] -= x; a[idx+1] -= x; a[idx+2] -= x;
  return 7 * x;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+2, 0);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i+1] > a[i+2]) {
      ans += two(a, i, min(a[i], a[i+1] - a[i+2]));
      ans += three(a, i, min({a[i], a[i+1], a[i+2]}));
    } else {
      ans += three(a, i, min({a[i], a[i+1], a[i+2]}));
      ans += two(a, i, min(a[i], a[i+1]));
    }
    ans += one(a, i, a[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}