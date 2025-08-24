#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int calc1(int n, const string &s, char c) {
  int ret = 0, idx = n-1;
  while (s[idx] == c) idx--;
  for (int i=idx; i>=0; i--) {
    if (s[i] == c) ret++;
  }
  return ret;
}

inline int calc2(int n, const string &s, char c) {
  int ret = 0, idx = 0;
  while (s[idx] == c) idx++;
  for (int i=idx; i<n; i++) {
    if (s[i] == c) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  cout << min({calc1(n, s, 'R'), calc1(n, s, 'B'),
               calc2(n, s, 'R'), calc2(n, s, 'B')});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}