#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

inline int input(const string &s) {
  int ret = 0;
  for (char c : s) ret = ret << 1 | c == '1';
  return ret;
}

void solve(void) {
  string s, t; cin >> s >> t;
  int a = input(s), b = input(t);

  vector<int> d(1<<11, -1); d[a] = 0;
  queue<int> q; q.push(a);
  while (!q.empty()) {
    int p = q.front(); q.pop();
    for (int i=0, x=p; x>>1; i++, x>>=1) {
      if (~d[p ^ 1 << i]) continue;
      d[p ^ 1 << i] = d[p] + 1;
      q.push(p ^ 1 << i);
    }
    if (p > 0 && !(~d[p-1])) {
      d[p-1] = d[p] + 1;
      q.push(p-1);
    }
    if (p < 2047 && !(~d[p+1])) {
      d[p+1] = d[p] + 1;
      q.push(p+1);
    }
  }
  cout << d[b];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}