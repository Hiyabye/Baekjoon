#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int q; cin >> q;

  vector<int> s;
  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int x; cin >> x;
      if (x == 1) sort(s.begin(), s.end());
      else sort(s.begin(), s.end(), greater<int>());
    } else {
      int x, t; cin >> x >> t;
      s.insert(s.begin() + x, t);
    }
  }

  cout << s.size() << "\n";
  for (int x : s) {
    cout << x << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}