#include <iostream>
#include <string>
#include <queue>
using namespace std;

void solve(void) {
  int n, x;
  cin >> n;
  string s;
  queue<int> q;

  for (int i=0; i<n; i++) {
    cin >> s;
    if (s == "push") {
      cin >> x;
      q.push(x);
    } else if (s == "pop") {
      if (q.empty()) {
        cout << "-1\n";
        continue;
      }
      x = q.front();
      cout << x << "\n";
      q.pop();
    } else if (s == "size") {
      cout << q.size() << "\n";
    } else if (s == "empty") {
      cout << q.empty() << "\n";
    } else if (s == "front") {
      if (q.empty()) cout << "-1\n";
      else cout << q.front() << "\n";
    } else if (s == "back") {
      if (q.empty()) cout << "-1\n";
      else cout << q.back() << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}