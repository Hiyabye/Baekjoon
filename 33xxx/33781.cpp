#include <iostream>
#include <set>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  int k; cin >> k;

  set<int> d;
  while (k--) {
    int x; cin >> x; x--;
    d.insert(x);
  }

  set<int> s;
  for (int i=0; i<n; i++) {
    int p; cin >> p;
    while (p--) {
      int x; cin >> x;
      if (d.count(i)) s.insert(x);
    }
  }
  return s.size() == m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}