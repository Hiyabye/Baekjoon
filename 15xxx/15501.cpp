#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &a, const vector<int> &b) {
  int idx = distance(a.begin(), find(a.begin(), a.end(), b[0]));
  for (int i=idx; i<n; i++) {
    if (a[i] != b[i-idx]) return false;
  }
  for (int i=0; i<idx; i++) {
    if (a[i] != b[n-idx+i]) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  if (check(n, a, b)) return true;
  reverse(b.begin(), b.end());
  return check(n, a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "good" : "bad") << " puzzle";
  return 0;
}