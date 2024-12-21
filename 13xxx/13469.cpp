#include <iostream>
#include <set>
using namespace std;

inline bool prime(int n) {
  if (n < 2) return false;
  for (int i=2; i*i<=n; i++) if (!(n % i)) return false;
  return true;
}

bool solve(void) {
  int q; cin >> q;

  set<int> s;
  for (int i=2; i*i<=q; i++) {
    if (!(q % i) && prime(i)) s.insert(i);
    while (!(q % i)) q /= i;
  }
  if (q > 1 && prime(q)) s.insert(q);

  return s.size() == 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}