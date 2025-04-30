#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n; cin >> n;
  queue<int> q;

  int x; cin >> x;
  while (x != -1) {
    if (x == 0) q.pop();
    else if (q.size() < n) q.push(x);
    cin >> x;
  }

  if (q.empty()) {
    cout << "empty";
  } else {
    while (!q.empty()) {
      cout << q.front() << " ";
      q.pop();
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}