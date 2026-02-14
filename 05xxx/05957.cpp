#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  int n; cin >> n;
  stack<int> s, t, u;
  for (int i=n; i>=1; i--) s.push(i);

  int c, d;
  while (cin >> c >> d) {
    if (c == 1) {
      while (d--) {
        if (s.empty()) break;
        t.push(s.top());
        s.pop();
      }
    } else if (c == 2) {
      while (d--) {
        if (t.empty()) break;
        u.push(t.top());
        t.pop();
      }
    }
  }

  while (!u.empty()) {
    cout << u.top() << "\n";
    u.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}