#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<string> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  return a != b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "CHEATER" : "NOT CHEATER") << "\n";
  return 0;
}