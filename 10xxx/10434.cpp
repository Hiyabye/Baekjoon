#include <iostream>
#include <set>
using namespace std;

inline int calc(int n) {
  int ret = 0;
  while (n) {
    ret += (n % 10) * (n % 10);
    n /= 10;
  }
  return ret;
}

inline bool prime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (!(n & 1)) return false;
  for (int i=3; i*i<=n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

bool solve(void) {
  int t, m; cin >> t >> m;
  cout << t << " " << m << " ";
  if (!prime(m)) return false;

  set<int> visited;
  while (m != 1) {
    if (visited.find(m) != visited.end()) return false;
    visited.insert(m);
    m = calc(m);
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}