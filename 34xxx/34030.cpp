#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool one(int n, vector<int> a) {
  vector<int> b, c;
  for (int x : a) {
    if (x & 1) b.push_back(x);
    else c.push_back(x);
  }
  return is_sorted(b.begin(), b.end()) && is_sorted(c.begin(), c.end());
}

inline bool two(int n, vector<int> a) {
  vector<int> b, c;
  for (int x : a) {
    if (x & 1) b.push_back(x);
    else c.push_back(x);
  }
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  vector<int> d(n);
  for (int i=0, j=0, k=0; i<n; i++) {
    if (a[i] & 1) d[i] = b[j++];
    else          d[i] = c[k++];
  }
  return is_sorted(d.begin(), d.end());
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  cout << (one(n, a) ? "So Lucky" : "Unlucky") << "\n";
  cout << (two(n, a) ? "So Lucky" : "Unlucky");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}