#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int first(int n, const vector<int> &a, int x) {
  for (int i=0; i<n; i++) if (a[i] == x) return i;
  return -1;
}

inline int last(int n, const vector<int> &a, int x) {
  for (int i=n-1; i>=0; i--) if (a[i] == x) return i;
  return -1;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  cout << max(last(n, a, 1) - first(n, a, 0), last(n, a, 0) - first(n, a, 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}