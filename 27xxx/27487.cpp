#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int two = count(a.begin(), a.end(), 2);
  if (two & 1) return -1;

  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (a[i] == 2) cnt++;
    if (cnt == two / 2) return i+1;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}