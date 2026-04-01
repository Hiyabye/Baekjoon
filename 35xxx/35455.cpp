#include <iostream>
using namespace std;

bool solve(void) {
  long long n, s; cin >> n >> s;

  return n + 10000000 == s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}