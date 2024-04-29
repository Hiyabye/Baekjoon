#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool check(int n, const vector<int> &a, const vector<int> &b) {
  for (int i=0; i<n; i++) {
    if (a[i] != b[i]) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  if (check(n, a, b)) return true;

  for (int i=n-1; i>=1; i--) {
    int mx = *max_element(a.begin(), a.begin()+i+1);
    int idx = find(a.begin(), a.begin()+i+1, mx) - a.begin();
    if (idx != i) {
      swap(a[idx], a[i]);
    }
    if (check(n, a, b)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}