#include <iostream>
using namespace std;

int solve(void) {
  int s, k; cin >> s >> k;

  if (k & 1) return s & 1;
  s %= (k + 1);
  return (s == k ? k : (s & 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}