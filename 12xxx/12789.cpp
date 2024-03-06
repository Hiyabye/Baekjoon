#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int cur = 1;
  stack<int> s;
  for (int i=0; i<n; i++) {
    if (v[i] == cur) cur++;
    else s.push(v[i]);

    while (!s.empty() && s.top() == cur) {
      s.pop();
      cur++;
    }
  }

  while (!s.empty()) {
    if (s.top() != cur) return false;
    s.pop();
    cur++;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Nice" : "Sad");
  return 0;
}