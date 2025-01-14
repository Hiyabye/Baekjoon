#include <iostream>
#include <set>
using namespace std;

set<int> s;

inline void add(int x) {
  while (s.count(x)) s.erase(x++);
  s.insert(x);
  if (s.count(x) && s.count(-x)) s.erase(x), s.erase(-x);
}

inline void sub(int x) {
  while (s.count(-x)) s.erase(-x++);
  s.insert(-x);
  if (s.count(x) && s.count(-x)) s.erase(x), s.erase(-x);
}

void solve(void) {
  int q; cin >> q;

  int d = 0;
  while (q--) {
    char t; int x; cin >> t >> x;
    if (x == 0) {
      d += (t == '+' ? 1 : -1);
      if (d == 2) add(1), d = 0;
      if (d == -2) sub(1), d = 0;
    } else if (t == '+') add(x);
    else sub(x);
    cout << (!d && s.empty() ? "YES" : "NO") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}