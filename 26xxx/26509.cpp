#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> a(3), b(3);
  for (int i=0; i<3; i++) cin >> a[i];
  for (int i=0; i<3; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i=0; i<3; i++) {
    if (a[i] != b[i]) return false;
  }
  return hypot(a[0], a[1]) == a[2];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}