#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  return ((n/100)*(n/100)+(n%100)*(n%100)) % 7 == 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}