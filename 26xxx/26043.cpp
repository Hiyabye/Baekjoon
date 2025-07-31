#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  queue<pair<int, int>> q;
  vector<int> a, b, c;
  while (n--) {
    int op; cin >> op;
    if (op == 1) {
      int x, y; cin >> x >> y;
      q.push({x, y});
    } else if (op == 2) {
      int x; cin >> x;
      if (q.front().second == x) a.push_back(q.front().first);
      else                       b.push_back(q.front().first);
      q.pop();
    }
  }
  while (!q.empty()) {
    c.push_back(q.front().first);
    q.pop();
  }

  sort(a.begin(), a.end());
  for (int x : a) cout << x << " ";
  if (a.empty()) cout << "None\n";
  else cout << "\n";

  sort(b.begin(), b.end());
  for (int x : b) cout << x << " ";
  if (b.empty()) cout << "None\n";
  else cout << "\n";

  sort(c.begin(), c.end());
  for (int x : c) cout << x << " ";
  if (c.empty()) cout << "None";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}