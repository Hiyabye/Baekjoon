#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n; cin >> n;
  queue<int> q;

  int mx = 0, id = 0;
  while (n--) {
    int op; cin >> op;
    if (op == 1) {
      int a; cin >> a;
      q.push(a);
    } else if (op == 2) {
      if (!q.empty()) q.pop();
    }
    if ((q.size() > mx) || (q.size() == mx && id > q.back())) {
      mx = q.size(); id = q.back();
    }
  }
  cout << mx << " " << id;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}