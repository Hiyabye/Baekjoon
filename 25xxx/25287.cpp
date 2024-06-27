#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  v[0] = min(v[0], n-v[0]+1);
  for (int i=1; i<n; i++) {
    int a = min(v[i], n-v[i]+1);
    int b = max(v[i], n-v[i]+1);
    if (a < v[i-1] && b < v[i-1]) return false;
    v[i] = (a < v[i-1] ? b : a);
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}