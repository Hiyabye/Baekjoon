#include <iostream>
#include <string>
using namespace std;

inline bool startswith(int n, char c) {
  return to_string(n).front() == c;
}

inline bool endswith(int n, char c) {
  return to_string(n).back() == c;
}

string calc(int l, int r) {
  string ret = "";
  for (int i=l; i<=r; i++) ret += to_string(i);
  return ret;
}

void solve(void) {
  string s; cin >> s;

  for (int i=1; i<=999; i++) {
    if (!startswith(i, s[0])) continue;
    for (int j=i; j<=999; j++) {
      if (!endswith(j, s.back())) continue;
      if (calc(i, j) == s) {
        cout << i << " " << j;
        return;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}