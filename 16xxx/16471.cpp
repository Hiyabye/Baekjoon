#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int idx = 0;
  for (int i=0; i<(n+1)/2; i++) {
    while (idx < n && a[i] >= b[idx]) idx++;
    if (idx == n) return false;
    idx++;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}